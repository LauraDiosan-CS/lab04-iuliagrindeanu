#include "UI.h"
#include <iostream>
using namespace std;
void add_ui(Repo& r) {
	int mark;
	cout << "Introduceti nota: ";
	cin >> mark;
	cout << endl;
	Exam newExam(mark);
	r.add(newExam);
	cout << "Added!" << endl;
}
void afisare_ui(Repo& r)
{
	cout << "Elementele sirului sunt: ";
	for (int i = 0; i < r.getSize();i++) {
		cout << r.getAll()[i] << " ";
	}
	cout << endl;
}
char meniu_ui()
{
	char op;
	cout << "Introduceti 1 pentru afisare filme;" << endl
		<< "Introduceti 2 pentru adaugare element;" << endl
		<< "Introduceti 3 pentru iesire." << endl
		<< "Introduceti optiunea: ";
	cin >> op;
	cout << endl;
	return op;
}
