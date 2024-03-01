#pragma once
#ifndef UNIVSTUDENT_H
#define UNIVSTUDENT_H
#include <iostream>
#include <string>

using namespace std;

#include "Student.h"

class UnivStudent : public Student {
	int id;
	int money;

public:
	void setId(int id);
	int doPartTimeJob();
	void printInfo();
};

#endif // !UNIVSTUDENT_H
