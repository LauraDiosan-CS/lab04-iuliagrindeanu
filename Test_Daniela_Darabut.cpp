#include <assert.h>
#include <string.h>
#include "Test_Daniela_Darabut.h"
#include "Repo_Daniela_Darabut.h"

void test()
{
	Repo Students;

	Student s1(2);

	Student s2(4);

	Student s3(5);

	Student s4(10);

	Student s5 = s4;

	Student s;

	// asert constructor
	assert(s5.getNota() == 10);
	s3.setNota(11);
	assert(s3.getNota() == 11);

	//asert repo
	Students.addStudent(s1);
	Students.addStudent(s2);

	assert(Students.getAll()[0] == s1);
	assert(Students.getStudent() == 2);

}
