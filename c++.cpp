#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

void cls(){
    system("cls");
}

void menu(){
    cls();
    cout << "VOICI LE MENU :" << endl;
    cout << "   1. Ajouter un étudiant " << endl;
    cout << "   2. Rechercher un étudiant  " << endl;
    cout << "   3. Listes des étudiants  " << endl;
    cout << "   4. QUITTER " << endl;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}

