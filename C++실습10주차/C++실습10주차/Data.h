#ifndef DATA_H
#define DATA_H

#include <string>

using namespace std;

class Data {
private:
    string dates[10]; // 날짜 저장하는 배열
    int steps[10]; // 걸음수 저장하는 배열
    int count; // 현재 저장된 데이터 개수

public:
    Data();
    void SetData(int index, const string& date, int steps); // 데이터 저장 함수
    bool LoadDataFromFile(const string& filename); // 파일에서 데이터 읽어오는 함수
    int GetMinSteps() const; // 최소값 계산
    int GetMaxSteps() const; // 최대값 계산
    double GetAverageSteps() const; // 평균값 계산
};

#endif
