#include <iostream>

#include "Data.h"

using namespace std;

int main() {
    Data data;
    if (data.LoadDataFromFile("results_steps.txt")) {
        int minSteps = data.GetMinSteps();
        int maxSteps = data.GetMaxSteps();
        double averageSteps = data.GetAverageSteps();

        cout << "최소 걸음수: " << minSteps << endl;
        cout << "최대 걸음수: " << maxSteps << endl;
        cout << "평균 걸음수: " << averageSteps << endl;
    }
    else {
        cerr << "파일을 열 수 없거나 데이터를 읽을 수 없습니다." << endl;
    }

    return 0;
}
