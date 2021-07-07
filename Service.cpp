#include "Service.h"
Service::Service() {

}
Service::~Service() {

}
void Service::add_exam(Exam& e){
	repo.add(e);
}
int Service::find(Exam& e) {
	return repo.find(e);
}
void Service::delete_exam(Exam& e) {
	repo.delete_exam(e);
}
void Service::update_exam(Exam& e, int index) {
	repo.update_exam(index, e);
}
int Service::getSize() {
	return repo.getSize();
}
Exam* Service::getAll() {
	return repo.getAll();
}
