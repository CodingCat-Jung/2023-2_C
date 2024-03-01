#pragma once
#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>
using namespace std;

class Shape {
protected:
	string name; // ������ �̸�
	int width, height; // ������ �����ϴ� �簢���� �ʺ�� ����
public:
	Shape(string n = "", int w = 0, int h = 0) { name = n; width = w; height = h; }
	virtual double getArea() { return 0; } // dummy �� ����
	string getName() { return name; } // �̸� ����
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
