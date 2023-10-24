#include <iostream>
using namespace std;

int main() {
    int tableau[10];
    int plusGrand, plusPetit;

    // Lecture des 10 nombres entiers
    for(int i = 0; i < 10; i++) {
        cout << "Entrez le nombre " << i+1 << " : ";
        cin >> tableau[i];
    }

    // Initialisation avec la première valeur du tableau
    plusGrand = plusPetit = tableau[0];

    // Recherche du plus grand et du plus petit
    for(int i = 1; i < 10; i++) {
        if(tableau[i] > plusGrand)
            plusGrand = tableau[i];
        if(tableau[i] < plusPetit)
            plusPetit = tableau[i];
    }

    // Affichage des résultats
    cout << "Le plus grand nombre est : " << plusGrand << endl;
    cout << "Le plus petit nombre est : " << plusPetit << endl;

    return 0;
}
