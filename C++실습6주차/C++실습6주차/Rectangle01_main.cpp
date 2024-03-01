#include <iostream>
using namespace std;

#include "Rectangle01.h"

int main() {
	
	int w, h;

	cout << "Rectangle_a의 가로와 세로 입력 >> ";
	cin >> w >> h;
	Rectangle01 r1(w, h);

	cout << "Rectangle_b의 가로와 세로 입력 >> ";
	cin >> w >> h;
	Rectangle01 r2(w, h);

	cout << endl;
	cout << "사각형_a의 면적 = " << r1.getArea() << ',' << "사각형_b의 면적 = " << r2.getArea() << endl;
	cout << endl;
	cout << "'참조에 의한 호출'을 이용한 swap() 실행" << endl;
	swap(r1, r2);
	cout << endl;
	cout << "사각형_a의 면적 = " << r1.getArea() << ',' << "사각형_b의 면적 = " << r2.getArea() << endl;
	return 0;
}