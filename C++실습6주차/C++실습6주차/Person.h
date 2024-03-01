#pragma once
#ifndef PERSON_H
#include <iostream>
#include <string>
using namespace std;

class Person {
	string name; // ���ڿ� ó���� ���� string ���
	int id;
public:
	Person(int id, string name);
	Person(const Person& Person); // ���� ������
	~Person();
	void changeName(string name);
	void show() { cout << id << ',' << name << endl; }
};

#endif // !PERSON_H
