#include <iostream>
#include <string>
using namespace std;

#include "Person.h"

Person::Person(int id, string name) {
	this->id = id;
	this->name = name;
}

Person::Person(const Person& person) {
	this->id = person.id;
	this->name = person.name;
	cout << "복사 생성자 실행. 원본 객체의 이름" << this->name << endl;
}

Person::~Person() {
	cout << "소멸자 실행" << endl;
}

void Person::changeName(string name) {
	if (name.length() > this->name.length()) {
		return;
	}
	this->name = name;
}