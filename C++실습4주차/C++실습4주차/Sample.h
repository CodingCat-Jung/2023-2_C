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
		cout << size << "���� ��Ҹ� ���� ���� �迭 ���� ����\n";
	};
	void read();
	void write();
	int big();
	int small();
	~Sample();
};

#endif // !SAMPLE.H
