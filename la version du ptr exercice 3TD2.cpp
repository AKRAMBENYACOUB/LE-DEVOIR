#include <iostream>
using namespace std;

int main() {
    int tableau[10];
    int *ptr = tableau;
    int plusGrand, plusPetit;

    // Lecture des 10 nombres entiers
    for(int i = 0; i < 10; i++) {
        cout << "Entrez le nombre " << i+1 << " : ";
        cin >> *(ptr + i);
    }

    // Initialisation avec la première valeur du tableau
    plusGrand = plusPetit = *ptr;

    // Recherche du plus grand et du plus petit
    for(int i = 1; i < 10; i++) {
        if(*(ptr + i) > plusGrand)
            plusGrand = *(ptr + i);
        if(*(ptr + i) < plusPetit)
            plusPetit = *(ptr + i);
    }

    // Affichage des résultats
    cout << "Le plus grand nombre est : " << plusGrand << endl;
    cout << "Le plus petit nombre est : " << plusPetit << endl;

    return 0;
}
