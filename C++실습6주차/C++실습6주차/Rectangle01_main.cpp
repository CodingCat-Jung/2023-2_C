#include <iostream>
using namespace std;

#include "Rectangle01.h"

int main() {
	
	int w, h;

	cout << "Rectangle_a�� ���ο� ���� �Է� >> ";
	cin >> w >> h;
	Rectangle01 r1(w, h);

	cout << "Rectangle_b�� ���ο� ���� �Է� >> ";
	cin >> w >> h;
	Rectangle01 r2(w, h);

	cout << endl;
	cout << "�簢��_a�� ���� = " << r1.getArea() << ',' << "�簢��_b�� ���� = " << r2.getArea() << endl;
	cout << endl;
	cout << "'������ ���� ȣ��'�� �̿��� swap() ����" << endl;
	swap(r1, r2);
	cout << endl;
	cout << "�簢��_a�� ���� = " << r1.getArea() << ',' << "�簢��_b�� ���� = " << r2.getArea() << endl;
	return 0;
}