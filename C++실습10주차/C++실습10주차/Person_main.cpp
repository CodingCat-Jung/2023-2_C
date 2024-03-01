#include <iostream>
#include <string>

using namespace std;

#include "Person.h"

int main() {
	Man m1("홍길동", 23);
	m1.Print();

	Woman w1("이아름", 21);
	w1.Print();

	return 0;
}