EXERCICE7:
#include <iostream>
using namespace std;

void triBulles(int tableau[], int taille) {
    bool permutation = true;
    while (permutation) {
        permutation = false;
        for (int i = 0; i < taille - 1; i++) {
            if (tableau[i] > tableau[i+1]) {
                // Échanger les éléments
                int temp = tableau[i];
                tableau[i] = tableau[i+1];
                tableau[i+1] = temp;
                permutation = true;
            }
        }
    }
}

int main() {
    int tableau[10];

    cout << "Veuillez entrer 10 entiers : ";
    for (int i = 0; i < 10; i++) {
        cin >> tableau[i];
    }

    triBulles(tableau, 10);

    cout << "Tableau trié : ";
    for (int i = 0; i < 10; i++) {
        cout << tableau[i] << " ";
    }
    cout << endl;

    return 0;
