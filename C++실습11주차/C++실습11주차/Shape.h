#pragma once
#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;

class Shape {
protected:
	string name; // 도형의 이름
	int width, height; // 도형이 내접하는 사각형의 너비와 높이
public:
	Shape(string n = "", int w = 0, int h = 0) { name = n; width = w; height = h; }
	virtual double getArea() { return 0; } // dummy 값 리턴
	string getName() { return name; } // 이름 리턴
};

class Oval : public Shape {
public:
	Oval(string n, int w, int h) : Shape(n, w, h) {}
	double getArea() { return width * height * 3.14; }
};

class Rect : public Shape {
public:
	Rect(string n, int w, int h) : Shape(n, w, h) {}
	double getArea() { return width * height; }
};

class Triangular : public Shape {
public:
	Triangular(string n, int w, int h) : Shape(n, w, h) {}
	double getArea() { return width * height * 0.5; }
};

#endif // !SHAPE_H
