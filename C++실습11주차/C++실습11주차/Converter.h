#ifndef CONVERTER_H
#define CONVERTER_H
#include <iostream>
using namespace std;

class Converter {
protected:
	double ratio;
	virtual double convert(double src) = 0;
	virtual string getSourceString() = 0;
	virtual string getDestString() = 0;
public:
	Converter(double ratio) { this->ratio = ratio; }
	void run() {
		double src;
		cout << getSourceString() << "�� " << getDestString() << "�� �ٲߴϴ�.";
		cout << getSourceString() << "�� �Է��ϼ���>> ";
		cin >> src;
		cout << "��ȯ ��� : " << convert(src) << getDestString() << endl;
	}
};

class WonToDollar : public Converter {
public:
	WonToDollar(double ratio = 0.0) :Converter(ratio) {}
	double convert(double src) { return src / ratio; }
	string getSourceString() { return "��"; }
	string getDestString() { return "�޷�"; }
};

class WonToEnd : public Converter {
public:
	WonToEnd(double ratio = 0.0) :Converter(ratio) {}
	double convert(double src) { return src / ratio; }
	string getSourceString() { return "��"; }
	string getDestString() { return "��"; }
};

#endif // !CONVERTER_H
