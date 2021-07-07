// lab04.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Test.h"
#include "UI.h"
using namespace std;
int main()
{
	test();
	testRepo();
	testService();
	Service s;
	char op;
	do
	{
		op = meniu_ui();
		switch (op)
		{
		default:
		{
			cout << "comanda invalida" << endl;
			break;
		}
		case '1':
		{
			afisare_ui(s);
			break;
		}
		case '2':
		{
			add_ui(s);
			break;
		}
		case '3':
		{
			delete_ui(s);
			break;
		}
		case '4':
		{
			update_exam_ui(s);
			break;
		}
		case'5':
		{
			find_ui(s);
			break;
		}
		case '6':
		{
			op = 0;
			break;
		}
		}


	} while (op);
	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
