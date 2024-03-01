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
		cout << "radius= " << radius << "�� ��" << endl;
	}
	friend Circle& operator++(Circle& c);
	friend Circle operator++(Circle& c, int x);
};

Circle& operator++(Circle& c); // ���� ������
Circle operator++(Circle& c, int x); // ���� ������

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
