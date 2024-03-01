#include <iostream>

#include "Data.h"

using namespace std;

int main() {
    Data data;
    if (data.LoadDataFromFile("results_steps.txt")) {
        int minSteps = data.GetMinSteps();
        int maxSteps = data.GetMaxSteps();
        double averageSteps = data.GetAverageSteps();

        cout << "�ּ� ������: " << minSteps << endl;
        cout << "�ִ� ������: " << maxSteps << endl;
        cout << "��� ������: " << averageSteps << endl;
    }
    else {
        cerr << "������ �� �� ���ų� �����͸� ���� �� �����ϴ�." << endl;
    }

    return 0;
}
