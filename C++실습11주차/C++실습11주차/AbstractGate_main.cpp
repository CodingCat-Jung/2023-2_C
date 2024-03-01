#include <iostream>
using namespace std;

#include "AbstractGate.h"

int main() {
	ANDGate andGate;
	ORGate orGate;
	NOTGate notGate;

	andGate.set(true, false);
	orGate.set(true, false);
	notGate.set(true, false);

	cout.setf(ios::boolalpha); // �Ҹ� ���� "true", "false" ���ڿ��� ���

	cout << andGate.operation() << endl;
	cout << orGate.operation() << endl;
	cout << notGate.operation() << endl;

	return 0;
}