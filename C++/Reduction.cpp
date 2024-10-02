#include <iostream>

using namespace std;

int main() {
	double prix = 0;
	int choix = 0;

	cout << "Entrez le prix : ";
	cin >> prix;

	cout << "Choisissez le status Etudiant (1), Enseignant (2), Autre (3) ";
	cin >> choix;

	switch (choix){
		case 1:
			cout << prix * 0.75 << " euro." << endl;
			break;
		case 2:
			cout << prix * 0.75 << " euro." << endl;
			break;
		case3:
			cout << prix * 0.75 << " euro." << endl;
			break;
	}
}