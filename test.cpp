//ajout des bibliothèques BASE
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;

//Variables globales :
ofstream ajout_on;
ifstream ajout_in;
int nbre_etudiant,i,j,k,l;
string champs1,champs2,line,line2,nom,prenom,sexe,classe;
string nom_tab[255],prenom_tab[255],sexe_tab[255],classe_tab[255];

//Sauvegarder les derniers données
void sauvegarder(){
    int valeur;
    ifstream fichierLecture("./donnee.txt");
    if(fichierLecture>>valeur){
    i=valeur;
    }else{
        valeur=0;
    }
    fichierLecture.close();
    valeur++;
    ofstream fichierEcriture("./donnee.txt");
    fichierEcriture<<valeur;
    fichierEcriture.close();
    i=valeur;
}

//Effacer les interfaces après chaque ouverture
void cls(){
    system("cls");
}

//Création de classe champs1
struct champs1{
    string nom;
    string prenom;
    string sexe;
    string classe;
};

//void ajout
void ajout_etudiant(){
    cls();
    cout<<"BIENVENUE DANS L'AJOUT D'ETUDIANT "<<endl<<endl<<endl;
    ajout_on.open("./.ajout des etudiants.txt",ios::app);
    cout<<"Veuillez entrer le nombre d'etudiant à ajouter':";cin>>nbre_etudiant;

for(int g=1;g<=nbre_etudiant;g++){
            i;
            sauvegarder();
            cin.ignore();
                cout<<"Etudiant "<<i<<" :"<<endl<<endl;
            cout<<"     Nom :";
            getline(cin,nom);
            ajout_on<<nom<<endl;
            nom_tab[i]=nom;

            cout<<"     Prenom :";
            getline(cin,prenom);
            ajout_on<<prenom<<endl;
            prenom_tab[i]=prenom;

            cout<<"     Sexe :";
            getline(cin,sexe);
            ajout_on<<sexe<<endl;
            sexe_tab[i]=sexe;

            cout<<"     Classe :";
            getline(cin,classe);
            ajout_on<<classe<<endl;
            classe_tab[i]=classe;

            cout<<"AJOUT D'ELEVE "<<prenom_tab[i]<<" AVEC SUCCES !";
            i+=0;
            j++;

        cin.ignore();

}
    ajout_on.close();
    cin.ignore();
    getline(cin,champs1);
}

//void rechercher etudiant
void recherche_etudiant(){
    cls();
    cout<<"RECHERCHER UN ETUDIANT"<<endl<<endl;
    string recherche;
    cout << "Veuiller entrer votre recherche par nom de l'etudiant ou par son prenom  exacte: ";cin>>recherche;
    cout << "Voici les resultats du recherche : "<<endl<<endl;
    cin.ignore();
    for(i=1;i<=j;i++){
        if(recherche==nom_tab[i]||recherche==prenom_tab[i]){
                        cout<<"Resultats :"<<endl;
                        cout<<"     Nom :"<<nom_tab[i]<<endl;
                        cout<<"     Prenom :"<<prenom_tab[i]<<endl;
                        cout<<"     Sexe :"<<sexe_tab[i]<<endl;
                        cout<<"     Classe :"<<classe_tab[i]<<endl<<endl;

       }
    }
    cin.ignore();
    
}

//void afficher etudiant
void affiche_etudiant(){
    cls();
    cout<<"BIENVENUE DANS LA LISTE DES ETUDIANTS"<<endl<<endl;
    ajout_in.open("./.ajout des etudiants.txt");
    getline(ajout_in,line);
    ajout_in.seekg(0);
    if(line==""){
        cout<<"La liste est vide , veuillez en ajouter ";
    }else{
        cout<<"Voici la liste des etudiants: "<<endl<<endl;
        for(i=1;i<=j;i++){
                cout<<"Etudiant "<<i<<" :"<<endl;
                getline(ajout_in,line);
                cout<<"     Nom :"<<line<<endl;
                getline(ajout_in,line);
                cout<<"     Prenom :"<<line<<endl;
                getline(ajout_in,line);
                cout<<"     Sexe :"<<line<<endl;
                getline(ajout_in,line);
                cout<<"     Classe :"<<line<<endl<<endl<<endl;
                l++;
            }
        }
    ajout_in.close();
    cin.ignore();
    getline(cin,line);
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


