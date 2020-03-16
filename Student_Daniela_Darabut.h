#pragma once
#include <ostream>
using namespace std;

class Student {
private:

	int nota;
public:
	Student();
	Student(int nota);
	Student(const Student& s);
	~Student();
	int getNota();
	void setNota(int nota);
	Student& operator=(const Student& s);
	bool operator==(const Student& s);
	friend ostream& operator<<(ostream& os, const Student& s);
};
