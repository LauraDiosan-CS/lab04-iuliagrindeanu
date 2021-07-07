#include "Exam.h"
#include <string.h>
#include <ostream>
#include <iostream>
#include <cstddef>
Exam::Exam() {
	mark = 0;
	name = NULL;
	date = NULL;
}
Exam::Exam(int m, char* n, char* d) {
	mark = m;
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	date = new char[strlen(d) + 1];
	strcpy_s(date, strlen(d) + 1, d);
}
Exam::Exam(const Exam& e) {
	mark = e.mark;
	name = new char[strlen(e.name) + 1];
	strcpy_s(name, strlen(e.name) + 1, e.name);
	date = new char[strlen(e.date) + 1];
	strcpy_s(date, strlen(e.date) + 1, e.date);
}
Exam::~Exam() {
	mark = 0;
	if (this->name) {
		delete[] this->name;
		this->name = NULL;
	}
	if (this->date) {
		delete[] this->date;
		this->date = NULL;
	}
}
int Exam::getMark() {
	return mark;
}
char* Exam::getName() {
	return name;
}
char* Exam::getDate() {
	return date;
}
void Exam::setMark(int m) {
	this->mark = m;
}
void Exam::setName(char* n) {
	if (name) {
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
void Exam::setDate(char* d) {
	if (date) {
		delete[] date;
	}
	date = new char[strlen(d) + 1];
	strcpy_s(date, strlen(d) + 1, d);
}
Exam& Exam::operator=(const Exam& e) {
	this->mark = e.mark;
	this->name = new char[strlen(e.name) + 1];
	strcpy_s(this->name, strlen(e.name) + 1, e.name);
	this->date = new char[strlen(e.date) + 1];
	strcpy_s(this->date, strlen(e.date) + 1, e.date);
	return *this;
}
bool Exam::operator==(const Exam& e) {
	return (mark == e.mark) && (strcmp(name, e.name) == 0) && (strcmp(date, e.date) == 0);
}
ostream& operator<<(ostream& os, const Exam& e) {
	os << e.mark << " " << e.name << " " << e.date << endl;
	return os;
}
