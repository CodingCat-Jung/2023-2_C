#include <iostream>
using namespace std;

#include "Circle_4-9.h"


void Circle01::setRadius(int r) {
	radius = r;
}

double Circle01::getArea() {
	return 3.14 * radius * radius;
}

Circle01::Circle01() {
	radius = 1;
	cout << "������ ���� radius = " << radius << endl;
}

Circle01::Circle01(int r) {
	radius = r;
	cout << "������ ���� radius = " << radius << endl;
}

Circle01::~Circle01() {
	cout << "�Ҹ��� ���� radius = " << radius << endl;
}