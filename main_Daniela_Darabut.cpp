// lab04_daniela.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iostream>
#include "Test_Daniela_Darabut.h"
#include "Student_Daniela_Darabut.h"
#include "Repo_Daniela_Darabut.h"

using namespace std;

char meniu()
{
    char op;
    cout << " **********************MENIU**********************" << endl;
    cout << "         Apasati 1 pentru afisarea notelor ;" << endl;
    cout << "         Apasati 2 pentru a adauga o nota ; " << endl;
    cout << "         Apasati x pentru a iesi ; " << endl;
    cout << "                ******************* " << endl;
    cin >> op;
    return op;
}

int main()
{
    int nota;
    Repo repo;
    char op;
    test();
    Student s;

    do
    {
        op = meniu();
        switch (op)
        {
        default:
        {  cout << " oh oh stinky" << endl;
        break;
        }
        case '1':
        {
            cout << " Notele sunt : ";
            for (int i = 0; i < repo.getStudent(); i++)
            {
                cout << repo.getAll()[i] << " , ";
            }
            cout << endl;
            break;
        }

        case '2':
        {
            cout << " Adauga nota dorita : ";
            cin >> nota;
            cout << " ..... se adauga nota " << endl;
            s.setNota(nota);
            repo.addStudent(s);
            cout << " Nota a fost adaugata , felicitari ! " << endl;
            break;
        }

        case 'x':
        {
            cout << " Va multumesc de participare " << endl;
            cout << "#############################################################" << endl;
            cout << "#                  _  _                                     #" << endl;
            cout << "#                 ( `   )_                                  #" << endl;
            cout << "#                (    )    `)                               #" << endl;
            cout << "#              (_   (_ .  _) _)                             #" << endl;
            cout << "#                                             _             #" << endl;
            cout << "#                                            (  )           #" << endl;
            cout << "#             _ .                         ( `  ) . )        #" << endl;
            cout << "#           (  _ )_                      (, _(  ,)_)      #" << endl;
            cout << "#         (_  ( ,)                                        #" << endl;
            cout << "#############################################################" << endl;
            return 0;
        }
        }

    } while (op);

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
