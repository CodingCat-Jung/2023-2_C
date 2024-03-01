#pragma once
#ifndef BOOK_H
#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price, pages;
public:
	Book(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "��" << pages << "������" << endl;
	}
	string getTitle() { return title; }
	bool operator!() {
		if (this->price == 0)return true;
		else return false;
	}
};

#endif // !BOOK_H
