#include "Examen.h"
#include <string.h>
#include <ostream>
#include <iostream>
#include <cstddef>
Exam::Exam() {
	mark = 0;
}
Exam::Exam(int m) {
	mark = m;

}
Exam::Exam(const Exam& e) {
	mark = e.mark;
}
Exam::~Exam() {
	mark = 0;
}
int Exam::getMark() {
	return mark;
}
void Exam::setMark(int m) {
	this->mark = m;
}
Exam& Exam::operator=(const Exam& e) {
	this->mark = e.mark;
	return *this;
}
bool Exam::operator==(const Exam& e) {
	return (mark==e.mark);
}
ostream& operator<<(ostream& os, const Exam& e) {
	os << e.mark;
	return os;
}
