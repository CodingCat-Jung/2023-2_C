#include <iostream>
#include <string>
using namespace std;

#include "Circle.h"

int main() {
	NamedCircle waffle(3, "waffle");
	waffle.show(); cout << endl;

	cout << "5개의 정수 반지름과 원의 이름을 입력하세요" << endl;
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
	cout << "가장 면적이 큰 피자는 " << pizza[maxInd].getName() << " 입니다" << endl;
	return 0;
}