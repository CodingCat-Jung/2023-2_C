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
		cout << "��" << i + 1 << "�� �̸��� ������ : ";
		cin >> name >> radius;
		p[i].setCircle(name, radius);
	}
}

void CircleManager::searchByName() {
	string find;
	cout << "�˻��ϰ��� �ϴ� ���� �̸� : ";
	cin >> find;

	for (int i = 0; i < size; i++) {
		if (find == p[i].getName()) {
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << endl;
			break;
		}
	}
}

void CircleManager::searchByArea() {
	int min;
	cout << "�ּ� ������ ������ �Է��ϼ��� : ";
	cin >> min;
	cout << min << "���� ū ���� �˻��մϴ�." << endl;

	for (int i = 0; i < size; i++) {
		if (p[i].getArea() > min) {
			cout << p[i].getName() << "�� ������ " << p[i].getArea() << ", ";
		}
	}
	cout << endl;
}