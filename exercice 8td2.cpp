#include <iostream>
using namespace std;

class Complexe {
private:
    float reel;
    float imaginaire;

public:
    Complexe(float r,float i) : reel(r), imaginaire(i) {}

    Complexe addition(Complexe autre) {
        float reel_resultat = reel + autre.reel;
        float imaginaire_resultat = imaginaire + autre.imaginaire;
        return Complexe(reel_resultat, imaginaire_resultat);
    }

    Complexe soustraction(Complexe autre) {
        float reel_resultat = reel - autre.reel;
        float imaginaire_resultat = imaginaire - autre.imaginaire;
        return Complexe(reel_resultat, imaginaire_resultat);
    }

    Complexe multiplication(Complexe autre) {
        float reel_resultat = reel * autre.reel - imaginaire * autre.imaginaire;
        float imaginaire_resultat = reel * autre.imaginaire + imaginaire * autre.reel;
        return Complexe(reel_resultat, imaginaire_resultat);
    }

    Complexe division(Complexe autre) {
        float diviseur = autre.reel * autre.reel + autre.imaginaire * autre.imaginaire;
        float reel_resultat = (reel * autre.reel + imaginaire * autre.imaginaire) / diviseur;
        float imaginaire_resultat = (imaginaire * autre.reel - reel * autre.imaginaire) / diviseur;
        return Complexe(reel_resultat, imaginaire_resultat);
    }

    bool egalite(Complexe autre) {
        return reel == autre.reel && imaginaire == autre.imaginaire;
    }

    void afficher_resultat() {
        cout << "Partie réelle : " << reel << endl;
        cout << "Partie imaginaire : " << imaginaire << endl;
    }
};

Complexe demander_nombre() {
    float reel, imaginaire;
    cout << "Entrez la partie réelle : ";
    cin >> reel;
    cout << "Entrez la partie imaginaire : ";
    cin >> imaginaire;
    return Complexe(reel, imaginaire);
}

int menu() {
    int choix;
    cout << "Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Soustraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Égalité" << endl;
    cout << "Choisissez une opération (1-5) : ";
    cin >> choix;
    return choix;
}

int main() {
	Complexe resultat(0,0) ;
    Complexe nombre1 = demander_nombre();
    Complexe nombre2 = demander_nombre();
    int choix = menu();
    switch (choix) {
        case 1:
            resultat = nombre1.addition(nombre2);
            break;
        case 2:
            resultat = nombre1.soustraction(nombre2);
            break;
        case 3:
            resultat = nombre1.multiplication(nombre2);
            break;
        case 4:
            resultat = nombre1.division(nombre2);
            break;
     
        default:
            cout << "Choix invalide" << endl;
            return 1;
    }

    resultat.afficher_resultat();

    return 0;
}
