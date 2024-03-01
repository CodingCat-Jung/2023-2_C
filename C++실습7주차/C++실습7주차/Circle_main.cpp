#include <iostream>
using namespace std;

#include "Circle.h"

int main() {
	Circle a(5), b(4);
	++a;
	b = a++;
	a.show();
	b.show();

	return 0;
}