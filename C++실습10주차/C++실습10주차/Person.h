#include <iostream>
#include <string>

using namespace std;

class Person {
public:
	enum SEX {male, female};
protected:
	string m_name;
	int m_age;
	SEX m_sex;
public:
	Person() : m_age(0), m_sex(male) {}
	Person(const string& name, int age, SEX sex) : m_name(name), m_age(age), m_sex(sex) {}
	void Print() const {
		cout << "이름 : " << m_name << ", 나이 : " << m_age << endl;
	}
};

class Man : public Person {
public:
	Man(const string& name, int age) : Person(name, age, male) {}
};

class Woman : public Person {
public:
	Woman(const string& name, int age) : Person(name, age, female) {}
};