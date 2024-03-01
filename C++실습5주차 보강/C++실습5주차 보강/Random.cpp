#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

#include "Random.h"

int Random::nextInt(int min, int max)
{
	return min + rand() % (max - min); //[min, max)�� ������ ���� min�� �� �� �����ش�.
}

char Random::nextAlphabet()
{
    char randomChar;

    // 0 �Ǵ� 1�� �������� �����Ͽ� �빮�� �Ǵ� �ҹ��� ���ĺ� ���� ����
    if (rand() % 2 == 0) {
        randomChar = 'A' + (rand() % 26); // �빮�� ���ĺ�
    }
    else {
        randomChar = 'a' + (rand() % 26); // �ҹ��� ���ĺ�
    }

    return randomChar;
}

double Random::nextDouble()
{
	return (double)rand() / RAND_MAX; // 0�̻� 1�̸��� �Ǽ��� ��ȯ�ϱ� ���� RAND_MAX�� �̿��� �������ش�.
}