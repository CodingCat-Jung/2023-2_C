#include <iostream>
#include <string>
using namespace std;

#include "Circle.h"

int main() {
	NamedCircle waffle(3, "waffle");
	waffle.show(); cout << endl;

	cout << "5���� ���� �������� ���� �̸��� �Է��ϼ���" << endl;
	NamedCircle pizza[5];
	for (int i = 0; i < 5; i++) {
		cout << i + 1 << ">> ";
		int r; 
		string name;
		cin >> r >> name;
		pizza[i].setName(name);
		pizza[i].setRadius(r);
	}
	int max = 0, maxInd;
	for (int i = 0; i < 5; i++) {
		if (pizza[i].getArea() > max) {
			max = pizza[i].getArea();
			maxInd = i;
		}
	}
	cout << "���� ������ ū ���ڴ� " << pizza[maxInd].getName() << " �Դϴ�" << endl;
	return 0;
}