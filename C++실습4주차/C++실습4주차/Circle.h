#pragma once
#ifndef CIRCLE_H
#define CIRCLE_H

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int r) { radius = r; }
	double getArea();
};
#endif // !CIRCLE_H
