#include<iostream>
#include <string.h>
#include "class\salarie.hpp"
using namespace std;

int main() {
	int choix;
	salarie ob;
	cout << "\t --Ce programme pour Gistion de Salarie --\n";
	do {
		cout << "1 - add Un Salarie : " << endl;
		cout << "2 - affiche les Informations des Salaries - " << endl;
		cout << "3 - affiche les Informations de Salaries - "<< endl;
		cout << "4 - modifier les Information de Salarie - " << endl;
		cout << "5 - ajouter un mois payé pourtoutes les Salaries - " << endl;
		cout << "6 - delete les Information de Salarie - " << endl;
		cout << "7 - EXIT - " << endl;
		//Saisir le choix
		cout << ">> Saisir votre choix : ";
		cin >> choix;
		//le switch
		switch (choix) {
		case 1:
			ob.addUnSalarie();
			break;
		case 2:
			ob.afficheInformationDesSalaries();
			break;
		case 3:
			ob.modifierInformationSalarie();
			break;
		case 4:
			ob.modifierInformationSalarie();
			break;
		case 5:
			ob.ajouterMoisPayePourSalaries();
			break;
		case 6:
			ob.removeUnSalarie();
			break;
		case 7:
			//exit est une foncion predéfini dans c++
			exit(1);
			break;
			//
		default:
			cout << "votre choix n'exist pas";
		}
	} while (true);
	return 0;
}
