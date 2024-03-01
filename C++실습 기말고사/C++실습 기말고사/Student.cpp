#include <iostream>
#include <string>

using namespace std;

#include "Student.h"

Student::Student() {
	this->name = "";
	this->address = "";
	this->age = 0; // 기본값 0으로 초기화
	this->male = true; // male 변수는 true로 초기화
}

Student::Student(string name, string address, int age, bool male) {
	this->name = name;
	this->address = address;
	this->age = age;
	this->male = male;
}

Student::~Student() {
	cout << "소멸자 실행" << endl;
}

void Student::print() {
	cout << "이름 : " << name << endl;
	cout << "주소 : " << address << endl;
	cout << "나이 : " << age << endl;
	cout << "성별 : " << male << endl;
}

void Student::setInfo(string name, string address, int age, bool male) {
	this->name = name;
	this->address = address;
	this->age = age;
	this->male = male;
}
