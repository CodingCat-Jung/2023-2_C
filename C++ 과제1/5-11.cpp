#include <iostream>
#include <cstring>
using namespace std;

class Person {
	char* name;
	int id;
public:
	Person(int id, const char* name);
	Person(const Person& person); // 복사 생성자
	~Person();
	void changeName(const char* name);
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) {
	this->id = id;
	int len = strlen(name); // name 문자의 개수
	this->name = new char[len + 1]; // name 문자열 공간 할당
	strcpy(this->name, name); // name 문자열 복사
}

Person::Person(const Person& person) {
	this->id = person.id;
	int len = strlen(person.name);
	this->name = new char[len + 1];
	strcpy(this->name, person.name);
	cout << "복사 생성자 실행. 원본 객체의 이름 " << this->name << endl;
}

Person::~Person() {
	// 만일 name에 동적할당된 배열이 있으면 메모리 반환
	if (name) delete [] name;
}

void Person::changeName(const char* name) {
	// 현재 name에 할당된 메모리보다 긴 이름으로 바꿀 수 없다.
	if (strlen(name) > strlen(this->name)) return;
	strcpy(this->name, name);
}

int main() {
	Person father(1, "kitae");
	Person daughter(father); // daughter 객체 복사 생성. 복사 생성자 호출

	cout << "daughter 객체 생성 직후 ---" << endl;
	father.show();
	daughter.show();

	daughter.changeName("Grace");
	cout << "daughter 이름을 Grace로 변경한 후 ---" << endl;
	father.show();
	daughter.show();

	return 0;
}