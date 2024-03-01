#include <iostream>
using namespace std;

#include "Circle_4-9.h"

int main() {
	Circle01* pArray = new Circle01[3]; // °´Ã¼ ¹è¿­

	pArray[0].setRadius(10);
	pArray[1].setRadius(20);
	pArray[2].setRadius(30);

	for (int i = 0; i < 3; i++) {
		cout << pArray[i].getArea() << '\n';
	}

	Circle01* p = pArray;
	for (int i = 0; i < 3; i++) {
		cout << p->getArea() << '\n';
		p++;
	}

	delete [] pArray;
}