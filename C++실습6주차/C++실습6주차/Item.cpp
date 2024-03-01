#include <iostream>
using namespace std;

#include "Item.h"

Item::Item(const char* title, int price) {
    this->title = new char[strlen(title) + 1];
    strcpy(this->title, title);
    this->price = price;
}

Item::~Item() {
    delete[] title;
}

void Item::set(const char* title, int price) {

    this->title = new char[strlen(title) + 1];
    strcpy(this->title, title);
    this->price = price;
}