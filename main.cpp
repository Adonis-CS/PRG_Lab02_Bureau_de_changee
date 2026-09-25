/* ---------------------------
Laboratoire : 02
Auteur(s) : Adonis Chasi Sanchez
Date : 23.09.2026
But : Bureau de change
Remarque(s) : Faire une conversion d'Euro à Francs
--------------------------- */

#include <iostream> // permet d'afficher du texte à l'écran et de lire des données saisies au clavier
#include <cstdlib>  //La librairie <cstdlib> propose deux constantes EXIT_SUCCESS et EXIT_FAILURE
#include <iomanip>  // pour setprecision et fixed

using namespace std; // Indique au compilateur d’utiliser un espace de noms std

///////////////////////////Declaration de variables ///////////////////////////////////////

string nom_utilisateur;                 // Sauvegarde le nom de famille de l'utilisateur
double compte_bancaire;                 // Sauvegarde le numero de compte
double somme_euro;                      // Sauvegarde la somme souhaitee en Euro
double solde_compte = 1000.00;          // Sauvegarde le solde du compte CHF
double taux_change_euro = 1.024;        // Sauvegarde le taux de change
double frais_change = 5.00;             // Sauvegarde le Frais d operation



int main() {

    cout << "Quel est votre numero de compte ? " << endl; //cout affiche à l’écran du texte et endl passe à la ligne
    cin >> compte_bancaire;  //lire une donnée saisie par l'utilisateur et de la stocker dans une variable.

    cout << "Quel est votre nom de famille ?" << endl;
    cin >> nom_utilisateur;

    cout << fixed << setprecision(2);

    cout << "Solde de votre compte CHF : " << solde_compte << endl;
    cout << "Taux de change : 1 CHF = 1.024 Euro " << endl;
    cout << "Frais d operation : " << frais_change << " CHF " << endl;

    cout << "Entrez la somme souhaitee en Euro : " << endl;
    cin >> somme_euro;

    double conversion_chf = somme_euro / taux_change_euro; // opération pour calculer la conversion d'euro à francs
    double total_restant = solde_compte - (conversion_chf + frais_change); // opération pour calculer le solde restant

    cout << "Somme CHF : " << somme_euro << ", Solde compte : " <<total_restant << endl;

    /////////////////////ticket//////////////////////

    cout << "+-------------------------------+" << endl;
    cout << "| " << endl;
    cout << "| "<< nom_utilisateur << endl;
    cout << "| "<< compte_bancaire << endl;
    cout << "| " << endl;
    cout << "| Somme Euro             :"<< somme_euro << endl;
    cout << "| 1 CHF en Euro          :"<< taux_change_euro << endl;
    cout << "| " << endl;
    cout << "| Somme CHF              :"<< conversion_chf << endl;
    cout << "| Frais                  :"<< frais_change << endl;
    cout << "| " << endl;
    cout << "| Solde Compte           :" << total_restant<< endl;
    cout << "| " << endl;
    cout << "+-------------------------------+" << endl;
    return EXIT_SUCCESS;
}