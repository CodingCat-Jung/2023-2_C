// �ǽ� ���� 6�� 3��

#include <iostream>
using namespace std;

int big(int a, int b, int c = 100) {
	return (a > b ? a : b) < c ? (a > b ? a : b) : c;
}

int main() {
	int x = big(3, 5); // ū ���� �ִ밪 100���� �����Ƿ� 5 ����.
	int y = big(300, 60); // ū ���� �ִ밪 100���� ũ�Ƿ� 100 ����.
	int z = big(30, 60, 50); // ū ���� �ִ밪 50���� ũ�Ƿ� 50 ����.
	cout << x << ' ' << y << ' ' << z << endl;
	return 0;
}