#include <iostream>
#include <string>

using namespace std;

#include "Student.h"

Student::Student() {
	this->name = "";
	this->address = "";
	this->age = 0; // �⺻�� 0���� �ʱ�ȭ
	this->male = true; // male ������ true�� �ʱ�ȭ
}

Student::Student(string name, string address, int age, bool male) {
	this->name = name;
	this->address = address;
	this->age = age;
	this->male = male;
}

Student::~Student() {
	cout << "�Ҹ��� ����" << endl;
}

void Student::print() {
	cout << "�̸� : " << name << endl;
	cout << "�ּ� : " << address << endl;
	cout << "���� : " << age << endl;
	cout << "���� : " << male << endl;
}

void Student::setInfo(string name, string address, int age, bool male) {
	this->name = name;
	this->address = address;
	this->age = age;
	this->male = male;
}
