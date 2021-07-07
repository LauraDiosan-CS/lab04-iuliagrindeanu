#pragma once
#include "Student_Daniela_Darabut.h"

class Repo
{
private:
	Student students[20];
	int n;
public:
	Repo();
	~Repo();
	void addStudent(Student s);
	Student* getAll();
	int getStudent();

};
