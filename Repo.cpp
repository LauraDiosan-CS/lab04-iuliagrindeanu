#include "Repo.h"
Repo::Repo() {
	dim = 0;
}
void Repo::add(Exam& e) {
	if (dim >= 30) {
		cout << "Nu se mai poate adauga!" << endl;
		return;
	}
	all_exams[dim] = e;
	dim++;
}
Exam* Repo::getAll() {
	return all_exams;
}
Repo::~Repo() {
	dim = 0;
}
int Repo::find(Exam& e) {
	for (int j = 0;j < dim;j++) {
		if (all_exams[j] == e) {
			return j;
		}
	}
	return -1;
}
void Repo::delete_exam(Exam& e) {
	int i = find(e);
	if (i >= 0) {
		all_exams[i] = all_exams[dim - 1];
		dim--;
		//cout << "Exam Deleted!" << endl;
	}
	else {
		cout << "Examenul nu exista!" << endl;
	}
}
void Repo::update_exam(int index, Exam& e) {
	if (index >= 0 && index < dim) {
		all_exams[index] = e;
	}
}