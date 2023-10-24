#include <iostream>

using namespace std;

void affiche(){
static int i = 1 ;
cout << " affiche appel numero " << i<<endl ;
++i ;
}


int main()
{
    affiche() ;
    affiche() ;
    affiche() ;


    return 0;
}
