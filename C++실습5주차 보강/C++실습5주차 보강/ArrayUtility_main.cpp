#include <iostream>
using namespace std;

#include "ArrayUtility.h"
int main() {
    int x[5];
    double y[5], z[5];

    cout << "정수를 5개 입력하라.\n배열에 삽입>>";
    for (int i = 0; i < 5; i++) cin >> x[i];

    cout << "정수 배열을 double 배열에 저장하고 결과 출력\n>>";
    ArrayUtility::intToDouble(x, y, 5); // x[] -> y[]

    for (int i = 0; i < 5; i++) cout << y[i] << ' ';
    cout << endl;

    cout << "실수를 5개 입력하라\n배열에 삽입>>";
    for (int i = 0; i < 5; i++)cin >> z[i];

    cout << "실수 배열을 int 배열에 저장하고 결과를 출력\n>>";
    ArrayUtility::doubleToInt(z, x, 5); // z[] -> x[]

    for (int i = 0; i < 5; i++) cout << x[i] << ' ';
    cout << endl;

    return 0;
 }