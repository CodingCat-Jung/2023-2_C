#ifndef DATA_H
#define DATA_H

#include <string>

using namespace std;

class Data {
private:
    string dates[10]; // ��¥ �����ϴ� �迭
    int steps[10]; // ������ �����ϴ� �迭
    int count; // ���� ����� ������ ����

public:
    Data();
    void SetData(int index, const string& date, int steps); // ������ ���� �Լ�
    bool LoadDataFromFile(const string& filename); // ���Ͽ��� ������ �о���� �Լ�
    int GetMinSteps() const; // �ּҰ� ���
    int GetMaxSteps() const; // �ִ밪 ���
    double GetAverageSteps() const; // ��հ� ���
};

#endif
