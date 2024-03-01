#include <iostream>
using namespace std;

#include "Converter.h"

int main() {
	WonToDollar wd(1350);
	wd.run();

	cout << endl << endl;

	WonToEnd we(866);
	we.run();

	return 0;
}