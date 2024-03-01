#pragma once
#ifndef ABSTRACTGATE_H
#define ABSTRACTGATE_H
#include <iostream>
using namespace std;

class AbstractGate {
protected:
	bool x, y;
public:
	void set(bool x, bool y) { this->x = x; this->y = y; }
	virtual bool operation() = 0;
};

class ANDGate : public AbstractGate {
public:
	bool operation() { return x & y; }
};

class ORGate : public AbstractGate {
public:
	bool operation() { return x | y; }
};

class NOTGate : public AbstractGate {
public:
	bool operation() { return x ^ y; }
};
#endif // !ABSTRACTGATE_H
