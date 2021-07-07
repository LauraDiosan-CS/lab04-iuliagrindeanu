#pragma once
#include "Repo.h"
class Service {
private:
	Repo repo;
public:
	Service();
	~Service();
	void add_exam(Exam& e);
	int getSize();
	Exam* getAll();
	int find(Exam& e);
	void delete_exam(Exam& e);
	void update_exam(Exam& e, int index);


};