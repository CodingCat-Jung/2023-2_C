#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

#include "Random.h"

int main() {
	
	int i, n = 10;

	cout << "1���� 100���� ������ ���� 10���� ����մϴ�.\n";
	for (i = 0; i < n; i++) cout << Random::nextInt(1, 100)<<' ';
	cout << endl << endl;

	cout << "���ĺ��� �����ϰ� 10�� ����մϴ�.\n";
	for (i = 0; i < n; i++) cout << Random::nextAlphabet()<<' ';
	cout << endl << endl;

	cout << " ������ �Ǽ� 10���� ����մϴ�.\n";
	for (i = 0; i < n; i++) cout << Random::nextDouble()<<' ';
	cout << endl << endl;
	return 0;
}