#pragma once
#ifndef RECTANGLE01_H
#include <iostream>

class Rectangle01 {
	int width;
	int height;
public:
	Rectangle01() { width = height = 1; }
	Rectangle01(int w, int h) { width = w, height = h; }
	int getArea() { return width * height; }
	void swap(Rectangle01& r1, Rectangle01& r2);
};

#endif // !RECTANGLE01_H
