#include <iostream>
#include <vector>
using namespace std;

int main() {

	vector <int> v; // ���� ��ü ����

	while (true) {
		int num, sum = 0;

		cout << "������ �Է��ϼ���(0�� �Է��ϸ� ����) >> "; cin >> num;

		if (num == 0) break; // 0�̸� ����

		v.push_back(num); // ���Ϳ� ����

		for (int i = 0; i < v.size(); i++) {
			cout << v[i] << ' ';
			sum += v[i];
		}
		cout << endl;
		cout << "��� = " << (double)sum / v.size() << endl;

	}
	return 0;
}