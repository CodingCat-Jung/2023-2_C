#pragma once
#ifndef  BOOK01_H
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Book01 {
	string title;
	int price;
	int pages;
public:
	Book01(string title = "", int price = 0, int pages = 0) {
		this->title = title; this->price = price; this->pages = pages;
	}
	void show() {
		cout << title << ' ' << price << "원 " << pages << " 페이지" << endl;
	}
	string getTitle() { return title; }
	friend bool operator< (string title, Book01 book);
};

bool operator< (string title, Book01 book) {
	if (title.compare(book.title) < 0) return true;
	else return false;
}
#endif // ! BOOK01_H