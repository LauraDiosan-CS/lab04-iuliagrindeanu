#include "Test.h"
#include "Repo.h"
#include "Service.h"
#include <assert.h>
#include <string.h>
void test() {
	Exam e1(7, "Ana", "20ianuarie");
	Exam e2(10, "Iulia", "13martie");
	Exam e3(8, "Andrei", "10feb");
	Exam students[3] = { e1, e2, e3 };
	assert(students[0].getMark() == 7);
	assert(students[1].getMark() == 10);
	assert(students[2].getMark() == 8);
	assert(strcmp(students[1].getName(), "Iulia") == 0);
	assert(strcmp(students[2].getDate(), "10feb") == 0);
}
void testRepo() {
	Repo r;
	Exam e1(7, "Ana", "20ianuarie");
	Exam e2(10, "Iulia", "13martie");
	Exam e3(8, "Andrei", "10feb");
	r.add(e1);
	r.add(e2);
	r.add(e3);
	assert(r.getSize() == 3);
	Exam* all_exams = r.getAll();
	assert(all_exams[0] == e1);
	assert(all_exams[1] == e2);
	assert(all_exams[2] == e3);
	r.delete_exam(e2);
	assert(r.getSize() == 2);
	int i0=r.find(e1);
	assert(i0 == 0);
	int i1 = r.find(e3);
	assert(i1 == 1);
	r.add(e2);
	int i2 = r.find(e2);
	assert(i2 == 2);
	Exam e4(9, "Alex", "19martie");
	r.update_exam(0, e4);
	i0 = r.find(e4);
	assert(i0 == 0);
}
void testService() {
	Service s;
	Exam e1(7, "Ana", "20ianuarie");
	Exam e2(10, "Iulia", "13martie");
	Exam e3(8, "Andrei", "10feb");
	s.add_exam(e1);
	s.add_exam(e2);
	s.add_exam(e3);
	assert(s.getSize() == 3);
	//Exam* all_exams = r.getAll();
	//assert(all_exams[0] == e1);
	//assert(all_exams[1] == e2);
	//assert(all_exams[2] == e3);
	s.delete_exam(e2);
	assert(s.getSize() == 2);
	int i0 = s.find(e1);
	assert(i0 == 0);
	int i1 = s.find(e3);
	assert(i1 == 1);
	s.add_exam(e2);
	int i2 = s.find(e2);
	assert(i2 == 2);
	Exam e4(9, "Alex", "19martie");
	s.update_exam(e4, 0);
	i0 = s.find(e4);
	assert(i0 == 0);
}