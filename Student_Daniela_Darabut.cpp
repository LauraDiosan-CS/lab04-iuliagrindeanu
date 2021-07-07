#include "Student_Daniela_Darabut.h"
#include <cstddef>
#include <string.h>
#include <ostream>
#include <iostream>

using namespace std;

Student::Student() {
	this->nota = 0;
}

Student::Student(int nota)
{

	this->nota = nota;
}

Student::Student(const Student& s) {
	cout << "copy constructor" << endl;
	this->nota = s.nota;
}

Student::~Student()
{
	this->nota = 0;
}


int Student::getNota()
{
	return this->nota;
}



void Student::setNota(int nota) {
	this->nota = nota;
}

Student& Student::operator=(const Student& s) {
	this->setNota(s.nota);
	return *this;
}

bool Student:: operator==(const Student& s) {
	return this->nota == s.nota;
}

ostream& operator<<(ostream& os, const Student& s)
{
	os << s.nota;
	return os;
}