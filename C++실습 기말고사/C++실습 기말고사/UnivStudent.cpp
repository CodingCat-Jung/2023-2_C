#include <iostream>
#include <string>

using namespace std;

#include "UnivStudent.h"

void UnivStudent::setId(int id) {
	this->id = id; // id �Է�
}

int UnivStudent::doPartTimeJob() {
	cout << "�ñ� 6500 �Ϸ� 4�ð� 20�� �ٷ� ����" << endl;
	int mo = ((6500 * 4) * 20);
	return mo;
}

void UnivStudent::printInfo() {
	cout << "id : " << id << endl;
	cout << "������ " << doPartTimeJob() << endl;
}