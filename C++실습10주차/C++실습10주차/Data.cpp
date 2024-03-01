#include <iostream>
#include <fstream>

using namespace std;

#include "Data.h"

Data::Data() {
    count = 0;
}

void Data::SetData(int index, const string& date, int steps) {
    if (index >= 0 && index < 10) {
        dates[index] = date; // 배열에 날짜 저장
        this->steps[index] = steps; // 배열에 걸음수 저장
        if (index >= count) {
            count = index + 1;
        }
    }
}

bool Data::LoadDataFromFile(const string& filename) {
    ifstream file(filename); // 파일 오픈
    // 파일 오픈 성공
    if (file.is_open()) {
        int index = 0;
        while (index < 10 && file >> dates[index] >> steps[index]) { // 10개의 파일에서 데이터 읽음
            index++;
        }
        count = index; // 파일에서 읽은 데이터 개수로 현재 저장된 데이터 개수 업데이트
        file.close();
        return true;
    }
    return false;
}

int Data::GetMinSteps() const {
    // 데이터가 없을 경우 0 반환
    if (count == 0) {
        return 0;
    }

    // 최소값 계산
    int minSteps = steps[0];
    for (int i = 1; i < count; ++i) {
        if (steps[i] < minSteps) {
            minSteps = steps[i];
        }
    }
    return minSteps;
}

int Data::GetMaxSteps() const {
    // 데이터가 없을 경우 0 반환
    if (count == 0) {
        return 0;
    }

    // 최대값 계산
    int maxSteps = steps[0];
    for (int i = 1; i < count; ++i) {
        if (steps[i] > maxSteps) {
            maxSteps = steps[i];
        }
    }
    return maxSteps;
}

double Data::GetAverageSteps() const {
    // 데이터가 없을 경우 0 반환
    if (count == 0) {
        return 0.0;
    }

    // 모든 값 더해서
    int sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += steps[i];
    }

    // 평균 계산
    return static_cast<double>(sum) / count;
}
