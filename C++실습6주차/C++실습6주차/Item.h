#pragma once
#ifndef ITEM_H
#include <iostream>
using namespace std;

class Item {
	char* title; // ��ǰ�� �̸�
	int price; // ��ǰ�� ����
public:
	Item(const char* title, int price);
	~Item();
	void set(const char* title, int price);
	void show() { cout << title << "\t" << price << "��" << endl; }
};
#endif // !ITEM_H
