#include <iostream>
#include <string>

using namespace std;

#include "Student.h"
#include "UnivStudent.h"

int main() {

	cout << "**********[3] ��ü hong ���**********" << endl;

	Student hong("ȫ�浿", "�泲 �ƻ�� ��â�� ��õ����б�", 20);
	hong.print();

	cout << endl << endl;
	cout << "**********[4] ��ü kim ���**********" << endl;

	Student kim;
	kim.setInfo("�迵��", "�泲 �ƻ�� ��õ��� 22 ��õ����б�", 19, false);
	kim.print();

	cout << endl << endl;
	cout << "**********[5] ��ü park ���**********" << endl;

	UnivStudent park;
	park.setInfo("����ȣ", "�泲 �ƻ�� ��õ���� ����Ʈ������а�", 21);
	park.setId(20204026);

	park.print();
	cout << endl;

	park.printInfo();
	cout << endl << endl;

	return 0;
}