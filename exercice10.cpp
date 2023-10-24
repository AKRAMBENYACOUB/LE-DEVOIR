exercice10:
#include <iostream>
#include <string>
using namespace std;

class Personne {
private:
    string nom;
    string prenom;
    string dateNaissance;

public:
    Personne(string nom, string prenom, string dateNaissance)
        : nom(nom), prenom(prenom), dateNaissance(dateNaissance) {}

    virtual void Afficher() const {
        cout << "Nom : " << nom << ", Prénom : " << prenom << ", Date de naissance : " << dateNaissance << endl;
    }
};

class Employe : public Personne {
private:
    double salaire;

public:
    Employe(string nom, string prenom, string dateNaissance, double salaire)
        : Personne(nom, prenom, dateNaissance), salaire(salaire) {}

    void Afficher() const override {
        Personne::Afficher();
        cout << "Salaire : " << salaire << " €" << endl;
    }
};

class Chef : public Employe {
private:
    string service;

public:
    Chef(string nom, string prenom, string dateNaissance, double salaire, string service)
        : Employe(nom, prenom, dateNaissance, salaire), service(service) {}

    void Afficher() const override {
        Employe::Afficher();
        cout << "Service : " << service << endl;
    }
};

class Directeur : public Chef {
private:
    string societe;

public:
    Directeur(string nom, string prenom, string dateNaissance, double salaire, string service, string societe)
        : Chef(nom, prenom, dateNaissance, salaire, service), societe(societe) {}

    void Afficher() const override {
        Chef::Afficher();
        cout << "Société : " << societe << endl;
    }
};

int main() {
    Personne personne("akram", "benyacoub", "01/01/1980");
    Employe employe("ahmad", "wadie", "02/02/1990", 3000.0);
    Chef chef("Bnani", "samira", "03/03/1985", 4000.0, "RH",);
    Directeur directeur("omar", "tahiri", "01/01/1980", 10000.0, "Direction", "ABC Inc.");

    personne.Afficher();
    cout << endl;
    employe.Afficher();
    cout << endl;
    chef.Afficher();
    cout << endl;
    directeur.Afficher();

    return 0;
}
