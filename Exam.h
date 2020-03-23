#pragma once
#include <ostream>
using namespace std;
#include <iostream>
class Exam {
private:
	int mark;
	char* name;
	char* date;
public:
	Exam();
	Exam(int mark, char* name, char* date);
	Exam(const Exam& e);
	~Exam();
	int getMark();
	char* getName();
	char* getDate();
	void setMark(int mark);
	void setName(char* name);
	void setDate(char* date);
	Exam& operator=(const Exam&);
	bool operator==(const Exam&);
	friend ostream& operator<<(ostream& os, const Exam& e);
};