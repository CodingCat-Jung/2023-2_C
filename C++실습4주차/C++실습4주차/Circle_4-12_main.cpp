#include <iostream>
#include <string>
using namespace std;

#include "Circle_4-12.h"

int main() {
	int num;
	
	cout << "���� ���� : ";
	cin >> num;

	CircleManager c(num);

	c.searchByName();
	c.searchByArea();

	return 0;
}