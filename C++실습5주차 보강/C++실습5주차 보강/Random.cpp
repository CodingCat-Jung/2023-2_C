#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

#include "Random.h"

int Random::nextInt(int min, int max)
{
	return min + rand() % (max - min); //[min, max)의 범위를 위해 min을 한 번 더해준다.
}

char Random::nextAlphabet()
{
    char randomChar;

    // 0 또는 1을 랜덤으로 선택하여 대문자 또는 소문자 알파벳 문자 생성
    if (rand() % 2 == 0) {
        randomChar = 'A' + (rand() % 26); // 대문자 알파벳
    }
    else {
        randomChar = 'a' + (rand() % 26); // 소문자 알파벳
    }

    return randomChar;
}

double Random::nextDouble()
{
	return (double)rand() / RAND_MAX; // 0이상 1미만의 실수를 변환하기 위해 RAND_MAX를 이용해 나누어준다.
}