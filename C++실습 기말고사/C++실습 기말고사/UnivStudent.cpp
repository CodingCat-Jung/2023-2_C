#include <iostream>
#include <string>

using namespace std;

#include "UnivStudent.h"

void UnivStudent::setId(int id) {
	this->id = id; // id 입력
}

int UnivStudent::doPartTimeJob() {
	cout << "시급 6500 하루 4시간 20일 근로 기준" << endl;
	int mo = ((6500 * 4) * 20);
	return mo;
}

void UnivStudent::printInfo() {
	cout << "id : " << id << endl;
	cout << "월급은 " << doPartTimeJob() << endl;
}