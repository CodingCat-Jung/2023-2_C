// 실습 문제 6장 3번

#include <iostream>
using namespace std;

int big(int a, int b, int c = 100) {
	return (a > b ? a : b) < c ? (a > b ? a : b) : c;
}

int main() {
	int x = big(3, 5); // 큰 값이 최대값 100보다 작으므로 5 리턴.
	int y = big(300, 60); // 큰 값이 최대값 100보다 크므로 100 리턴.
	int z = big(30, 60, 50); // 큰 값이 최대값 50보다 크므로 50 리턴.
	cout << x << ' ' << y << ' ' << z << endl;
	return 0;
}