#include <iostream>

using namespace std ;
bool fonction1(int n) {
     if (n%2==0)
    cout<<"ce nombre est pair" ;}

bool fonction2(int n) {
    if (n%3==0)
     cout<<"ce nombre est multiple de 3" ;}



int main() {
	int n ;
    cout<<"entrer un nombre:"<< endl ;
    cin>>n ;
    if (fonction1( n)) {
        cout << "Il est pair" << endl;
    }

    if (fonction2(n)) {
        cout << "Il est multiple de 3" << endl;
    }

    if (fonction1(n) &&fonction2(n)) {
        cout << "Il est divisible par 6" << endl;
    }


    return 0;
}

