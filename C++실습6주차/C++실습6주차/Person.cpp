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
	cout << "���� ������ ����. ���� ��ü�� �̸�" << this->name << endl;
}

Person::~Person() {
	cout << "�Ҹ��� ����" << endl;
}

void Person::changeName(string name) {
	if (name.length() > this->name.length()) {
		return;
	}
	this->name = name;
}