#include "Repo_Daniela_Darabut.h"

Repo::Repo() {
	this->n = 0;
}
Repo::~Repo() {
	this->n = 0;
}
void Repo::addStudent(Student s) {
	this->students[this->n++] = s;
}

Student* Repo::getAll()
{
	return this->students;
}

int Repo::getStudent()
{
	return this->n;

}