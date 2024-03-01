#pragma once
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>

using namespace std;

class Student {
	string name;
	string address;
	int age;
	bool male;

public:
	Student();
	Student(string name, string address, int age, bool male = true);
	~Student();
	void print();
	void setInfo(string name, string address, int age, bool male = true);
};


#endif // !STUDENT_H
