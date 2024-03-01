#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector <int> v; // 벡터 객체 생성

	while (true) {
		int num, sum = 0;

		cout << "정수를 입력하세요(0을 입력하면 종료) >> "; cin >> num;

		if (num == 0) break; // 0이면 종료

		v.push_back(num); // 벡터에 삽입

		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << ' ';
			sum += v[i];
		}
		cout << endl;
		cout << "평균 = " << (double)sum / v.size() << endl;

	}
	return 0;
}