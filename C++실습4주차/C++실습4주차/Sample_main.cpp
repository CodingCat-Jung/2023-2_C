#include <iostream>
#include <string>
using namespace std;

#include "Sample.h"

int main() {
	int n;
	cout << "�迭�� ũ��>> ";
	cin >> n;

	Sample s(n);
	s.read();
	s.write();
	cout << "���� ū �� : " << s.big() << endl;
	cout << "���� ���� �� : " << s.small() << endl;

	return 0;
}