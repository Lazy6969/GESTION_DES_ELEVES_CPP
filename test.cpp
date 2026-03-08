//ajout des bibliothèques BASE
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

//Effacer les interfaces après chaque ouverture
void cls(){
    system("cls");
}

//void ajout
void ajout_etudiant(){

}

//void rechercher etudiant
void recherche_etudiant(){
    
}

//void afficher etudiant
void affiche_etudiant(){
    
}
//Juste affichage du menu
void menu(){
    cls();
    cout << "VOICI LE MENU :" << endl;
    cout << "   1. Ajouter un étudiant " << endl;
    cout << "   2. Rechercher un étudiant  " << endl;
    cout << "   3. Listes des étudiants  " << endl;
    cout << "   4. QUITTER " << endl;
}

//Fonction principale ou le programme execute
int main()
{
    while(1){ //boucle infinie
    menu(); // afficher le menu du choix
    int choix; // declaration de l'entier "choix" 
    cout << "Veuiller choisir un choix : ";cin>>choix; //afficher et ecrire le choix
        switch(choix){ // condition du choix : entre dans notre fonction par choix de l'utilisateur

            //Appel fonction et Procedure par case
            case 1: ajout_etudiant();break;
            case 2: recherche_etudiant();break;
            case 3: affiche_etudiant();break;
            case 4: cout<<"Au revoir ..."; return 0; // choix pour quitter le programme
            default:cout << "Choix invalide !Veuillez rechoisir votre choix"<<endl<<endl; // réessaie si le choix est invalide
        }
    }
    return 0;
}


