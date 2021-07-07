#pragma once
#include"Exam.h"
class Repo {
private:
	Exam all_exams[30];
	int dim;
public:
	Repo();
	~Repo();
	void add(Exam& e);
	Exam* getAll();
	int getSize() { return dim; };
	int find(Exam& e);
	void delete_exam(Exam& e);
	void update_exam(int index, Exam& e);
};