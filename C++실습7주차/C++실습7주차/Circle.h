#pragma once
#ifndef CIRCLE_H
#include<iostream>
using namespace std;

class CIrcle;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	void show() {
		cout << "radius= " << radius << "인 원" << endl;
	}
	friend Circle& operator++(Circle& c);
	friend Circle operator++(Circle& c, int x);
};

Circle& operator++(Circle& c); // 전위 연산자
Circle operator++(Circle& c, int x); // 후위 연산자

Circle& operator++(Circle& c) {
	c.radius++;
	return c;
}

Circle operator++(Circle& c, int x) {
	Circle tmp = c;
	c.radius++;
	return tmp;
}


#endif // !CIRCLE_H
