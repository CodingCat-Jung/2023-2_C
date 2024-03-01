#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
#ifndef RANDOM_H

class Random {
public:
	// �׻� �ٸ� �������� �߻���Ű�� ���� seed�� �����ϴ� �Լ�
	static void seed() { srand((unsigned)time(0)); } //���� ����
	static int nextInt(int min = 0, int max = 32767); // min�� max ������ ���� ���� ����
	static char nextAlphabet(); // ���� ���ĺ� ���� ����
	static double nextDouble(); // 0���� ũ�ų� ���� 1���� ���� ���� �Ǽ� ����
};

#endif // !RANDOM_H
