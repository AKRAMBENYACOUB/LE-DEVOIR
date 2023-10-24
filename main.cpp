#include <iostream>
using namespace std;

int main() {
    // Étape 1 : Déclarer un entier a
    int a = 22;

    // Étape 2 : Déclarer une référence vers cet entier ref_a
    int &ref_a = a;

    // Étape 3 : Déclarer un pointeur vers cet entier p_a
    int *p_a = &a;

    // Étape 4 : Afficher les variables, leurs adresses, la valeur pointée
    cout << "a : " << a << ", Adresse de a : " << &a << endl;
    cout << "ref_a : " << ref_a << ", Adresse de ref_a : " << &ref_a << ", Valeur pointée par ref_a : " << ref_a << endl;
    cout << "p_a : " << p_a << ", Adresse de p_a : " << &a << ", Valeur pointée par p_a : " << *p_a << endl;

    return 0;
}
