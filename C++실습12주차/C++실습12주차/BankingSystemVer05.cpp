/*
C++ �ǽ� 2�й� 12���� 2023.11.16 13:00~
Banking System ver 0.5
20204026 ������
AccountHandler��� �̸��� ��Ʈ�� Ŭ���� ����
*/

#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;

// ���������� ����
// MAKE��� ����� 1�� ����, ���ʴ�� 2, 3, 4, 5
enum {MAKE = 1, DEPOSIT, WITHDRAW, INQUIRE, EXIT};

// Account Ŭ���� - Entity Ŭ���� ����
class Account {
private:
	int accID; // ���� ID
	int balance; // �ܾ�
	char* cusName; // �� �̸�
public:
	Account(int ID, int money, char* name); // ������ - ���� ����
	Account(const Account& ref); // ���� ������

	int GetAccID() const; // ���� ID ��ȯ �Լ�
	void Deposit(int money); // �Ա� �Լ�
	int Withdraw(int money); // ��� �Լ�
	void ShowAccInfo() const; // �������� ��� �Լ�
	~Account();
};

Account::Account(int ID, int money, char* name) : accID(ID), balance(money) {
	cusName = new char[strlen(name) + 1]; // �� �̸� ������ �޸� ���� �Ҵ�
	strcpy(cusName, name);
}

Account::Account(const Account& ref) : accID(ref.accID), balance(ref.balance) {
	cusName = new char[strlen(ref.cusName) + 1];
	strcpy(cusName, ref.cusName);
}

// ���� ID ��ȯ �Լ�
int Account::GetAccID() const { return accID; }

// �Ա� �Լ�
void Account::Deposit(int money) {
	balance += money;
}

// ��� �Լ�
int Account::Withdraw(int money) {
	if (balance < money) return 0;

	balance -= money;
	return money;
}

// �������� ��� �Լ�
void Account::ShowAccInfo() const {
	cout << "����ID : " << accID << endl;
	cout << "�̸� : " << cusName << endl;
	cout << "�ܾ� : " << balance << endl;
}

Account::~Account() {
	delete[]cusName; // �޸� ����
}

// AccountHandler Ŭ���� - ��Ʈ�� Ŭ���� ����
class AccountHandler {
private:
	Account* accArr[10]; // Account ��ü �迭 ����
	int accNum; // ���� ���� ��
public:
	AccountHandler();
	void ShowMenu(void) const; // �޴� ��� �Լ�
	void MakeAccount(void); // ���� ���� �Լ�
	void DepositMoney(void); // �Ա� �Լ�
	void WithdrawMoney(void); // ��� �Լ�
	void ShowAllAccInfo(void) const; // ��� ���� ���� ��� �Լ�
	~AccountHandler();
};

void AccountHandler::ShowMenu(void) const {
	cout << "-----Menu-----" << endl;
	cout << "1. ���°���" << endl;
	cout << "2. �Ա�" << endl;
	cout << "3. ���" << endl;
	cout << "4. �������� ��ü ���" << endl;
	cout << "5. ���α׷� ����" << endl;
}

// ���� ���� �Լ�
void AccountHandler::MakeAccount(void) {
	int id; // ���� ID
	char name[NAME_LEN]; // �� �̸�
	int balance; // �Աݾ�

	cout << "[���°���]" << endl;
	cout << "����ID: "; cin >> id;
	cout << "�̸�: "; cin >> name;
	cout << "�Աݾ�: "; cin >> balance;
	cout << endl;

	// ���ο� ���� ���� �� �迭�� �߰�
	accArr[accNum++] = new Account(id, balance, name);
}

// �Ա� �Լ�
void AccountHandler::DepositMoney(void) {
	int money; // �Ա� �ݾ�
	int id; // ���� ID

	cout << "[ �Ա� ]" << endl;
	cout << "����ID: "; cin >> id;
	cout << "�Աݾ�: "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetAccID() == id) { // ��ġ�ϴ� ���¸� ã����
			accArr[i]->Deposit(money); // Deposit() �Լ��� ���� �Ա�
			cout << "�Ա� �Ϸ�" << endl << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
}

// ��� �Լ�
void AccountHandler::WithdrawMoney(void) {
	int money; // ��ݾ�
	int id; // ����ID

	cout << "[ ��� ]" << endl;
	cout << "����ID: "; cin >> id;
	cout << "��ݾ�: "; cin >> money;

	for (int i = 0; i < accNum; i++) {
		if (accArr[i]->GetAccID() == id) { // ��ġ�ϴ� ���¸� ã����
			if (accArr[i]->Withdraw(money) == 0) { // Withdraw()�Լ��� ���� �ܾ� �������� ��� ���н�
				cout << "�ܾ׺���" << endl << endl;
				return;
			}

			cout << "��ݿϷ�" << endl << endl;
			return;
		}
	}
	cout << "��ȿ���� ���� ID �Դϴ�." << endl << endl;
}

AccountHandler::AccountHandler() :accNum(0) {}

// ��� ���� ���� ��� �Լ�
void AccountHandler::ShowAllAccInfo(void) const {
	for (int i = 0; i < accNum; i++) {
		accArr[i]->ShowAccInfo();
		cout << endl;
	}
}

// �Ҹ���
AccountHandler::~AccountHandler() {
	// ��� Account ��ü ����
	for (int i = 0; i < accNum; i++) delete accArr[i];
}

// ��Ʈ�� Ŭ���� �߽����� ����� main �Լ�
int main() {
	AccountHandler manager;
	int choice;

	while (1) {
		manager.ShowMenu();
		cout << "����: ";
		cin >> choice;
		cout << endl;

		switch (choice)
		{
		case MAKE: // 1. ���� ����
			manager.MakeAccount();
			break;

		case DEPOSIT: // 2. �Ա�
			manager.DepositMoney();
			break;

		case WITHDRAW: // 3. ���
			manager.WithdrawMoney();
			break;

		case INQUIRE: // 4. ��� ���� ���� ���
			manager.ShowAllAccInfo();
			break;

		case EXIT: // 5. ����
			return 0;

		default:
			cout << "Illegal selection.." << endl;
		}
	}

	return 0;
}