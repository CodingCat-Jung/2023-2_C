#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

#include "Random.h"

int main() {
	
	int i, n = 10;

	cout << "1에서 100까지 랜덤한 정수 10개를 출력합니다.\n";
	for (i = 0; i < n; i++) cout << Random::nextInt(1, 100)<<' ';
	cout << endl << endl;

	cout << "알파벳을 랜덤하게 10개 출력합니다.\n";
	for (i = 0; i < n; i++) cout << Random::nextAlphabet()<<' ';
	cout << endl << endl;

	cout << " 랜덤한 실수 10개를 출력합니다.\n";
	for (i = 0; i < n; i++) cout << Random::nextDouble()<<' ';
	cout << endl << endl;
	return 0;
}