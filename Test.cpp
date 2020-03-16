#include "Test.h"
#include "Repo.h"
#include <assert.h>
#include <string.h>
void test() {
	Exam e1(7);
	Exam e2(10);
	Exam e3(8);
	Exam marks[3] = { e1, e2, e3 };
	assert(marks[0].getMark() == 7);
	assert(marks[1].getMark() == 10);
	assert(marks[2].getMark() == 8);
}
void testRepo() {
	Repo r;
	Exam e1(7);
	Exam e2(10);
	Exam e3(8);
	r.add(e1);
	r.add(e2);
	r.add(e3);
	assert(r.getSize() == 3);
	Exam* all_exams = r.getAll();
	assert(all_exams[0] == e1);
	assert(all_exams[1] == e2);
	assert(all_exams[2] == e3);
}