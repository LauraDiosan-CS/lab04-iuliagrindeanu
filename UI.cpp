#include "UI.h"
#include <iostream>
using namespace std;
void add_ui(Service& s) {
	int mark; 
	char name[100];
	char date[100];
	cout << "Introduceti nota: ";
	cin >> mark;
	cout << endl;
	cout << "Introduceti numele: ";
	cin >> name;
	cout << endl;
	cout << "Introduceti data: ";
	cin >> date;
	cout << endl;
	Exam newExam(mark, name, date);
	s.add_exam(newExam);
	cout << "Added!" << endl;
}
void delete_ui(Service& s) {
	int mark;
	char name[100];
	char date[100];
	cout << "Introduceti nota: ";
	cin >> mark;
	cout << endl;
	cout << "Introduceti numele: ";
	cin >> name;
	cout << endl;
	cout << "Introduceti data: ";
	cin >> date;
	cout << endl;
	Exam newExam(mark, name, date);
	s.delete_exam(newExam);
	//cout << "Deleted!" << endl;
}
void update_exam_ui(Service& s) {
	int index;
	int mark;
	char name[100];
	char date[100];
	cout << "Introduceti indexul: ";
	cin >> index;
	cout << "Introduceti nota: ";
	cin >> mark;
	cout << endl;
	cout << "Introduceti numele: ";
	cin >> name;
	cout << endl;
	cout << "Introduceti data: ";
	cin >> date;
	cout << endl;
	Exam newExam(mark, name, date);
	s.update_exam(newExam, index);
}
void find_ui(Service& s) {
	int mark;
	char name[100];
	char date[100];
	cout << "Introduceti nota: ";
	cin >> mark;
	cout << endl;
	cout << "Introduceti numele: ";
	cin >> name;
	cout << "Introduceti data: ";
	cin >> date;
	cout << endl;
	Exam newExam(mark, name, date);
	int i = s.find(newExam);
	cout << "Indexul este: " << i << endl;
}
void afisare_ui(Service& s)
{
	cout << "Elementele sirului sunt: " << endl;
	for (int i = 0; i < s.getSize();i++) {
		cout << s.getAll()[i] << " ";
	}
	cout << endl;
}
char meniu_ui()
{
	char op;
	cout << "Introduceti 1 pentru afisare examene;" << endl
		<< "Introduceti 2 pentru adaugare;" << endl
		<< "Introduceti 3 pentru delete." << endl
		<< "Introduceti 4 pentru modificare;" << endl
		<< "Introduceti 5 pentru identificare;" << endl
		<<"Introduceti 6 pentru inchiderea aplicatiei."<<endl
		<< "Introduceti optiunea: ";
	cin >> op;
	cout << endl;
	return op;
}
