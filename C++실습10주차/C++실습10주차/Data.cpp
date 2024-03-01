#include <iostream>
#include <fstream>

using namespace std;

#include "Data.h"

Data::Data() {
    count = 0;
}

void Data::SetData(int index, const string& date, int steps) {
    if (index >= 0 && index < 10) {
        dates[index] = date; // �迭�� ��¥ ����
        this->steps[index] = steps; // �迭�� ������ ����
        if (index >= count) {
            count = index + 1;
        }
    }
}

bool Data::LoadDataFromFile(const string& filename) {
    ifstream file(filename); // ���� ����
    // ���� ���� ����
    if (file.is_open()) {
        int index = 0;
        while (index < 10 && file >> dates[index] >> steps[index]) { // 10���� ���Ͽ��� ������ ����
            index++;
        }
        count = index; // ���Ͽ��� ���� ������ ������ ���� ����� ������ ���� ������Ʈ
        file.close();
        return true;
    }
    return false;
}

int Data::GetMinSteps() const {
    // �����Ͱ� ���� ��� 0 ��ȯ
    if (count == 0) {
        return 0;
    }

    // �ּҰ� ���
    int minSteps = steps[0];
    for (int i = 1; i < count; ++i) {
        if (steps[i] < minSteps) {
            minSteps = steps[i];
        }
    }
    return minSteps;
}

int Data::GetMaxSteps() const {
    // �����Ͱ� ���� ��� 0 ��ȯ
    if (count == 0) {
        return 0;
    }

    // �ִ밪 ���
    int maxSteps = steps[0];
    for (int i = 1; i < count; ++i) {
        if (steps[i] > maxSteps) {
            maxSteps = steps[i];
        }
    }
    return maxSteps;
}

double Data::GetAverageSteps() const {
    // �����Ͱ� ���� ��� 0 ��ȯ
    if (count == 0) {
        return 0.0;
    }

    // ��� �� ���ؼ�
    int sum = 0;
    for (int i = 0; i < count; ++i) {
        sum += steps[i];
    }

    // ��� ���
    return static_cast<double>(sum) / count;
}
