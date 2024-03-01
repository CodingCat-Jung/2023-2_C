#include <iostream>
#include <string>

using namespace std;

#include "Student.h"
#include "UnivStudent.h"

int main() {

	cout << "**********[3] 객체 hong 출력**********" << endl;

	Student hong("홍길동", "충남 아산시 신창면 순천향대학교", 20);
	hong.print();

	cout << endl << endl;
	cout << "**********[4] 객체 kim 출력**********" << endl;

	Student kim;
	kim.setInfo("김영희", "충남 아산시 순천향로 22 순천향대학교", 19, false);
	kim.print();

	cout << endl << endl;
	cout << "**********[5] 객체 park 출력**********" << endl;

	UnivStudent park;
	park.setInfo("박찬호", "충남 아산시 순천향대로 소프트웨어공학과", 21);
	park.setId(20204026);

	park.print();
	cout << endl;

	park.printInfo();
	cout << endl << endl;

	return 0;
}