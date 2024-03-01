/*
C++ 실습 2분반 12주차 2023.11.16 13:00~
Banking System ver 0.5
20204026 정명훈
AccountHandler라는 이름의 컨트롤 클래스 정의
*/

#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;

// 열거형으로 정의
// MAKE라는 상수를 1로 정의, 차례대로 2, 3, 4, 5
enum {MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

// Account 클래스 - Entity 클래스 유형
class Account {
private:
	int accID; // 계좌 ID
	int balance; // 잔액
	char* cusName; // 고객 이름
public:
	Account(int ID, int money, char* name); // 생성자 - 계좌 생성
	Account(const Account& ref); // 복사 생성자

	int GetAccID() const; // 계좌 ID 반환 함수
	void Deposit(int money); // 입금 함수
	int Withdraw(int money); // 출금 함수
	void ShowAccInfo() const; // 계좌정보 출력 함수
	~Account();
};

Account::Account(int ID, int money, char* name) : accID(ID), balance(money) {
	cusName = new char[strlen(name) + 1]; // 고객 이름 저장할 메모리 동적 할당
	strcpy(cusName, name);
}

Account::Account(const Account& ref) : accID(ref.accID), balance(ref.balance) {
	cusName = new char[strlen(ref.cusName) + 1];
	strcpy(cusName, ref.cusName);
}

// 계좌 ID 반환 함수
int Account::GetAccID() const { return accID; }

// 입금 함수
void Account::Deposit(int money) {
	balance += money;
}

// 출금 함수
int Account::Withdraw(int money) {
	if (balance < money) return 0;

	balance -= money;
	return money;
}

// 계좌정보 출력 함수
void Account::ShowAccInfo() const {
	cout << "계좌ID : " << accID << endl;
	cout << "이름 : " << cusName << endl;
	cout << "잔액 : " << balance << endl;
}

Account::~Account() {
	delete[]cusName; // 메모리 해제
}

// AccountHandler 클래스 - 컨트롤 클래스 유형
class AccountHandler {
private:
	Account* accArr[10]; // Account 객체 배열 선언
	int accNum; // 현재 계좌 수
public:
	AccountHandler();
	void ShowMenu(void) const; // 메뉴 출력 함수
	void MakeAccount(void); // 계좌 생성 함수
	void DepositMoney(void); // 입금 함수
	void WithdrawMoney(void); // 출금 함수
	void ShowAllAccInfo(void) const; // 모든 계좌 정보 출력 함수
	~AccountHandler();
};

void AccountHandler::ShowMenu(void) const {
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

// 계좌 생성 함수
void AccountHandler::MakeAccount(void) {
	int id; // 계좌 ID
	char name[NAME_LEN]; // 고객 이름
	int balance; // 입금액

	cout << "[계좌개설]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "이름: "; cin >> name;
	cout << "입금액: "; cin >> balance;
	cout << endl;

	// 새로운 계좌 생성 및 배열에 추가
	accArr[accNum++] = new Account(id, balance, name);
}

// 입금 함수
void AccountHandler::DepositMoney(void) {
	int money; // 입금 금액
	int id; // 계좌 ID

	cout << "[ 입금 ]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "입금액: "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetAccID() == id) { // 일치하는 계좌를 찾으면
			accArr[i]->Deposit(money); // Deposit() 함수를 통해 입금
			cout << "입금 완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
}

// 출금 함수
void AccountHandler::WithdrawMoney(void) {
	int money; // 출금액
	int id; // 계좌ID

	cout << "[ 출금 ]" << endl;
	cout << "계좌ID: "; cin >> id;
	cout << "출금액: "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetAccID() == id) { // 일치하는 계좌를 찾으면
			if (accArr[i]->Withdraw(money) == 0) { // Withdraw()함수를 통해 잔액 부족으로 출금 실패시
				cout << "잔액부족" << endl << endl;
				return;
			}

			cout << "출금완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
}

AccountHandler::AccountHandler() :accNum(0) {}

// 모든 계좌 정보 출력 함수
void AccountHandler::ShowAllAccInfo(void) const {
	for (int i = 0; i < accNum; i++) {
		accArr[i]->ShowAccInfo();
		cout << endl;
	}
}

// 소멸자
AccountHandler::~AccountHandler() {
	// 모든 Account 객체 삭제
	for (int i = 0; i < accNum; i++) delete accArr[i];
}

// 컨트롤 클래스 중심으로 변경된 main 함수
int main() {
	AccountHandler manager;
	int choice;

	while (1) {
		manager.ShowMenu();
		cout << "선택: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE: // 1. 계좌 생성
			manager.MakeAccount();
			break;

		case DEPOSIT: // 2. 입금
			manager.DepositMoney();
			break;

		case WITHDRAW: // 3. 출금
			manager.WithdrawMoney();
			break;

		case INQUIRE: // 4. 모든 계좌 정보 출력
			manager.ShowAllAccInfo();
			break;

		case EXIT: // 5. 종료
			return 0;

		default:
			cout << "Illegal selection.." << endl;
		}
	}

	return 0;
}