#include <iostream>
using namespace std;

int main() {
    // �tape 1 : D�clarer un entier a
    int a = 22;

    // �tape 2 : D�clarer une r�f�rence vers cet entier ref_a
    int &ref_a = a;

    // �tape 3 : D�clarer un pointeur vers cet entier p_a
    int *p_a = &a;

    // �tape 4 : Afficher les variables, leurs adresses, la valeur point�e
    cout << "a : " << a << ", Adresse de a : " << &a << endl;
    cout << "ref_a : " << ref_a << ", Adresse de ref_a : " << &ref_a << ", Valeur point�e par ref_a : " << ref_a << endl;
    cout << "p_a : " << p_a << ", Adresse de p_a : " << &a << ", Valeur point�e par p_a : " << *p_a << endl;

    return 0;
}
