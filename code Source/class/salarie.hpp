#ifndef salarie_HPP_INCLUDED
#define salarie_HPP_INCLUDED
#include <vector>
#include <iostream>
#include <string> 

using namespace std;

class salarie
{
	int id;
	char nomDeSalarie[20];
	char prenomDeSalarie[20];
	double valSalarie;
public:
	int getId() {
		return id;
	};
	void addUnSalarie() {
		cout << "id : ";
		cin >> this->id;
		cout << "nom : ";
		cin >> this->nomDeSalarie;
		cout << "pre : ";
		cin >> this->prenomDeSalarie;
		cout << "sal : ";
		cin >> this->valSalarie;
	}
	// afichage
	void afficheInformationSalarie() {
		cout << "id : " << id << endl;
		cout << "nom : " << nomDeSalarie << endl;
		cout << "pre : " << prenomDeSalarie << endl;
		cout << "sal : " << valSalarie << endl << endl << endl;
	}
	void modifierInformationSalarie() {
		cout << "Nouveau nom : ";
		cin >> this->nomDeSalarie;
		cout << "Nouveau prenom : ";
		cin >> this->prenomDeSalarie;
		cout << "Nouveau salaire : ";
		cin >> this->valSalarie;
	}
	//**des fonction
	void ajouterMoisPayePourSalaries() {

	}

void rechercheUnSalarie() {
	string nom;
	string prenom;
	cout << "Entrez le nom du salarie : ";
	cin >> nom;
	cout << "Entrez le prenom du salarie : ";
	cin >> prenom;
	if (nom == nomDeSalarie && prenom == prenomDeSalarie) {
		afficheInformationSalarie();
	}
	else {
		cout << "Salarie non trouve." << endl;
	}
}
};
#endif // INCLUDED
