#pragma once
#ifndef SAMPLE_H
#define SAMPLE_H

#include <iostream>
using namespace std;

class Sample {
	int* p;
	int size;
public:
	Sample(int n) {
		size = n;
		p = new int[size];
		cout << size << "개의 요소를 가진 정수 배열 동적 생성\n";
	};
	void read();
	void write();
	int big();
	int small();
	~Sample();
};

#endif // !SAMPLE.H
