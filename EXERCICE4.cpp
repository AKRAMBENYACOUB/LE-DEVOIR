EXERCICE4:
EXERCICE5:
#include <iostream>
using namespace std;

int main() {
    // �tape 1 : D�clarer un entier a
    int a = 22;

    int &ref_a = a;

    int *p_a = &a;

    cout << "a : " << a << ", Adresse de a : " << &a << endl;
    cout << "ref_a : " << ref_a << ", Adresse de ref_a : " << &ref_a << ", Valeur point�e par ref_a : " << ref_a << endl;
    cout << "p_a : " << p_a << ", Adresse de p_a : " << &a << ", Valeur point�e par p_a : " << *p_a << endl;

    return 0;
