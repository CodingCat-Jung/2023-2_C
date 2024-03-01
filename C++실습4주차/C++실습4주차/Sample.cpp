#include "Sample.h"

void Sample::read() {
	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}
}

void Sample::write() {
	for (int i = 0; i < size; i++) {
		cout << p[i] << ' ';
	}
	cout << endl;
}

int Sample::big() {
	int max = 0;
	for (int i = 0; i < size; i++) {
		if (p[i] > max)
			max = p[i];
	}
	return max;
}

int Sample::small() {
	int min = 0;
	for (int i = 0; i < size; i++) {
		if (p[i] < min)
			min = p[i];
	}
	return min;
}

Sample::~Sample() {
	delete[] p;
	cout << "동적 할당 해제" << endl;
}