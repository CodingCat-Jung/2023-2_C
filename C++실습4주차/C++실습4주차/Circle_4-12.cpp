#include <iostream>
#include <string>
using namespace std;

#include "Circle_4-12.h"

CircleManager::CircleManager(int size) {
	this->size = size;
	p = new Circle02[size];
	if (!p) return;
	string name;
	int radius;
	for (int i = 0; i < size; i++) {
		cout << "원" << i + 1 << "의 이름과 반지름 : ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}

void CircleManager::searchByName() {
	string find;
	cout << "검색하고자 하는 원의 이름 : ";
	cin >> find;

	for (int i = 0; i < size; i++) {
		if (find == p[i].getName()) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << endl;
			break;
		}
	}
}

void CircleManager::searchByArea() {
	int min;
	cout << "최소 면적을 정수로 입력하세요 : ";
	cin >> min;
	cout << min << "보다 큰 원을 검색합니다." << endl;

	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > min) {
			cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ", ";
		}
	}
	cout << endl;
}