#include <iostream>
#include <string>
#include <cstring>
using namespace std;

#include "Book01.h"

int main() {
	Book01 a("û��", 20000, 300);
	string b;
	cout << "å �̸��� �Է��ϼ���>> ";
	getline(cin, b);
	if (b < a)
		cout << a.getTitle() << "�� " << b << "���� �ڿ� �ֱ���! " << endl;

	return 0;
}