#include <iostream>
using namespace std;

class Circle {
	static int numOfCircles; // ������ ���� ���� ���
	int radius;
public:
	Circle(int r = 1);
	~Circle() { numOfCircles--; }
	double getArea() { return 3.14 * radius * radius; }
	static int getNumofCircles() { return numOfCircles; }
};

Circle::Circle(int r) {
	radius = r;
	numOfCircles++;
}

int Circle::numOfCircles = 0; // 0���� �ʱ�ȭ 

int main() {
	Circle* p = new Circle[10]; // 10���� ������ ����
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumofCircles() << endl;

	delete[]p; // 10���� �Ҹ��� ����
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumofCircles() << endl;

	Circle a;
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumofCircles() << endl;

	Circle b;
	cout << "�����ϰ� �ִ� ���� ���� = " << Circle::getNumofCircles() << endl;

	return 0;
}