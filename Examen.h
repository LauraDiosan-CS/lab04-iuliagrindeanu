#pragma once
#include <ostream>
using namespace std;
#include <iostream>
class Exam {
private:
	int mark;
public:
	Exam();
	Exam(int mark);
	Exam(const Exam& e);
	~Exam();
	int getMark();
	void setMark(int mark);
	Exam& operator=(const Exam&);
	bool operator==(const Exam&);
	friend ostream& operator<<(ostream& os, const Exam& e);
};