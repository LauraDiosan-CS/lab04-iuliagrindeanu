#pragma once
#include"Examen.h"
class Repo {
private:
	Exam students_marks[30];
	int dim;
public:
	Repo();
	~Repo();
	void add(Exam& e);
	Exam* getAll();
	int getSize() { return dim; };
};