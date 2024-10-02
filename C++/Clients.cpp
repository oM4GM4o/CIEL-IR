#include <iostream>
#include <vector>
const int age_max = 110;
const int age_vieux = 70;
const int age_bebe = 3;
const int age_enfant = 6;
const int seuil_membre_groupe = 30;
const double seuil_prix_groupe = 25000.0;
const double seuil_poid = 40.0;
const double prix_base = 1000.0;
const double prix_kilo = 5.0;
const double multiplicateur_vieux = 0.95;
const double multiplicateur_enfant = 0.5;
const double multiplicateur_bebe = 0.0;
const double multiplicateur_groupe = 0.0;


using namespace std;

double calculePrix(int age, int poid) {
	double prix = prix_base;
	if (age > age_vieux) {
		prix *= multiplicateur_vieux;
	}
	else if (age < age_bebe) {
		prix = multiplicateur_bebe;
	}
	else if (age <= age_enfant && age >= age_bebe) {
		prix *= multiplicateur_enfant;
	}

	if (poid > poid_seuil) {
		prix += prix_kilo * (poid - seuil_poid);
	}
	return(prix);
}
 
void printResult() {
	double total = 0;
	for (int groupe = 0; groupe < client_prix.size();) {
		total += client_prix[groupe];
		groupe++;
	}
	for (int j = 0; j < client_prix.size();) {
		cout << "-----------------------------------------------------" << endl;
		cout << "Client : " << j+1 << endl;
		cout << "Age : " << client_age[j] << endl;
		cout << "Poid baggage : " << client_poid[j] << endl;
		if (client_prix.size() >= seuil_membre_groupe || total >= seuil_prix_groupe) {
			cout << "Prix : " << client_prix[j] * multiplicateur_groupe << endl;
		}
		else {
			cout << "Prix : " << client_prix[j] << endl;
		}
		j++;
	}
	cout << "-----------------------------------------------------" << endl;
	cout << "Nombre personnes dans le groupe : " << client_prix.size() << endl;
	cout << "Prix total : " << total << endl;
	cout << "-----------------------------------------------------" << endl;
}

int main() {
	int in_age = 0;
	int in_poid = 0;
	int i = 0;
	char entry = 'o';
	while (true) {
		vector<int> client_age(0);
		vector<int> client_poid(0);
		vector<double> client_prix(0);
		while (true) {
			cout << "Entrez o pour ajouter un client au groupe ou n'importe quel autre charactere pour cloturer : ";
			cin >> entry;
			if (entry != 'o') {
				break;
			}
			else {
				cout << "-----------------------------------------------------" << endl;
				do {
					cout << "Entrez l'age du client (entre 1 et 110) : ";
					cin >> in_age;
				} while (in_age < 0 || in_age > age_max);
				client_age.push_back(in_age);
				do {
					cout << "Entrez le poid du baggage : ";
					cin >> in_poid;
				} while (in_poid < 0);
				client_poid.push_back(in_poid);
				client_prix.push_back(calculePrix(client_age[i], client_poid[i]));
				i++;
				cout << "-----------------------------------------------------" << endl;
			}
		}
		printResult();
	}
}