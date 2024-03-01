#include <iostream>
#include <string>
using namespace std;

#include "Sample.h"

int main() {
	int n;
	cout << "배열의 크기>> ";
	cin >> n;

	Sample s(n);
	s.read();
	s.write();
	cout << "가장 큰 수 : " << s.big() << endl;
	cout << "가장 작은 수 : " << s.small() << endl;

	return 0;
}