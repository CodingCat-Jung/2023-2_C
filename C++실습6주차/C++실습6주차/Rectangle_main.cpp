#include <iostream>
using namespace std;

#include "Rectangle.h"

int main() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "�簢���� ������ " << rect.getArea() << endl;

	return 0;
}