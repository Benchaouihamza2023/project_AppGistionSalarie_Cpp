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
		cout << "Entrez id du salarie : ";
		cin >> this->id;
		cout << "Entrez le nom du salarie : ";
		cin >> this->nomDeSalarie;
		cout << "Entrez le prenom du salarie : ";
		cin >> this->prenomDeSalarie;
		cout << "Entrez le salaire du salarie : ";
		cin >> this->valSalarie;
	}
	// afichage
	void afficheInformationSalarie(vector <salarie> &ob, int& i) {
		int id,j;
		cout << "Entrez le id du salarie : ";
		cin >> id;
		for (j = 0; j <= i; j++) {
			if (ob[j].getId() == id) {
				cout << "id : " << id << endl;
				cout << "nom : " << nomDeSalarie << endl;
				cout << "pre : " << prenomDeSalarie << endl;
				cout << "sal : " << valSalarie << endl;
				break;
			}
		
		}
	}
	void modifierInformationSalarie(vector <salarie> &ob, int& i) {
		int id, j;
		cout << "Entrez le id du salarie : ";
		cin >> id;
		for (j = 0; j <= i; j++) {
			if (ob[j].getId() == id) {
				cout << "Nouveau nom : ";
				cin >> this->nomDeSalarie;
				cout << "Nouveau prenom : ";
				cin >> this->prenomDeSalarie;
				cout << "Nouveau salaire : ";
				cin >> this->valSalarie;
				break;
			}
		}
	}
	//**des fonction
	void piementDesSalaires() {
         vector<string> date;
vector<string> salary_payments;
void piementdessalaires() {
    cout << " saisir votre choix ";cin >> tempDate;
    for (k= 0; k < i; k++) {
     cout << " saisir votre choix ";cin >> tempChoix;
      if (tempChoix == 'Y') {
            salary_payments.push_back(to_string(ob[k].getValsalarie())+"$");
      } else {
            salary_payments.push_back("non paid");
        }
    }
}

	}
	void rechercheUnSalarie(vector <salarie> &ob, int& i) {
	
		int id,j;
		cout << "Entrez le id du salarie : ";
		cin >> id;
		for (j = 0; j <= i; j++) {
			if (ob[j].getId() == id) {
				cout << "id : " << id << endl;
				cout << "nom : " << nomDeSalarie << endl;
				cout << "pre : " << prenomDeSalarie << endl;
				cout << "sal : " << valSalarie << endl;
				break;
			}
		}
	}
};

salarie foctionSalarie() {
	salarie temp;
	temp.addUnSalarie();
	return temp;
}
void removeUnSalarie(vector <salarie> &ob, int& i, int id) {
	int position;
	for (int j = 0; j <= i; j++) {
		if (ob[j].getId() == id)
			position = j;
	}
	for (int j = position; j<i; j++) {
		ob[j] = ob[j + 1];
	}
}
void afficheInformationSalarie(vector <salarie> &ob, int& i) {
		int k;
		for (k = 0; k <= i; k++) {
				cout << "id est  " << ob[k].id << endl;
				cout << "nom est  " <<ob[k]. nomDeSalarie << endl;
				cout << "prenom est " <<ob[k]. prenomDeSalarie << endl;
				cout << "salarie est   " << ob[k].valSalarie << endl;
	
		
		}
	}

#endif // INCLUDED
