#include <iostream>
using namespace std;

#include "ArrayUtility.h"
int main() {
    int x[5];
    double y[5], z[5];

    cout << "������ 5�� �Է��϶�.\n�迭�� ����>>";
    for (int i = 0; i < 5; i++) cin >> x[i];

    cout << "���� �迭�� double �迭�� �����ϰ� ��� ���\n>>";
    ArrayUtility::intToDouble(x, y, 5); // x[] -> y[]

    for (int i = 0; i < 5; i++) cout << y[i] << ' ';
    cout << endl;

    cout << "�Ǽ��� 5�� �Է��϶�\n�迭�� ����>>";
    for (int i = 0; i < 5; i++)cin >> z[i];

    cout << "�Ǽ� �迭�� int �迭�� �����ϰ� ����� ���\n>>";
    ArrayUtility::doubleToInt(z, x, 5); // z[] -> x[]

    for (int i = 0; i < 5; i++) cout << x[i] << ' ';
    cout << endl;

    return 0;
 }