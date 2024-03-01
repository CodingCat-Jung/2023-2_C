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
	cout << "积己磊 角青 radius = " << radius << endl;
}

Circle01::Circle01(int r) {
	radius = r;
	cout << "积己磊 角青 radius = " << radius << endl;
}

Circle01::~Circle01() {
	cout << "家戈磊 角青 radius = " << radius << endl;
}