#include "Repo.h"
Repo::Repo() {
	dim = 0;
}
void Repo::add(Exam& e) {
	students_marks[dim] = e;
	dim++;
}
Exam* Repo::getAll() {
	return students_marks;
}
Repo::~Repo() {
	dim = 0;
}