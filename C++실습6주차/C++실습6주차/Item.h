#pragma once
#ifndef ITEM_H
#include <iostream>
using namespace std;

class Item {
	char* title; // 물품의 이름
	int price; // 물품의 가격
public:
	Item(const char* title, int price);
	~Item();
	void set(const char* title, int price);
	void show() { cout << title << "\t" << price << "원" << endl; }
};
#endif // !ITEM_H
