#pragma once
#ifndef PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person {
	string name; // 문자열 처리를 위해 string 사용
	int id;
public:
	Person(int id, string name);
	Person(const Person& Person); // 복사 생성자
	~Person();
	void changeName(string name);
	void show() { cout << id << ',' << name << endl; }
};

#endif // !PERSON_H
