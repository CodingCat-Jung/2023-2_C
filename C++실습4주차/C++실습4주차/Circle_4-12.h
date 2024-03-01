#pragma once
#include <iostream>
#include <string>
using namespace std;
#ifndef CIRCLE_4-12_H

class Circle02 {
	int radius;
	string name;
public:
	void setCircle(string name, int radius) { this->name = name; this->radius = radius; };
	double getArea() { return 3.14*radius*radius; };
	string getName() { return name; };
};

class CircleManager {
	Circle02* p;
	int size;
public:
	CircleManager(int size);
	~CircleManager() {
		delete[]p;
	}
	void searchByName();
	void searchByArea();
};

#endif // !CIRCLE_4_19_H
