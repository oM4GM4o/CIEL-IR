#include <iostream>

using namespace std;

int main() {

	int nbRebond = 0;
	double hauteur = 0;

	cout << "Entrez la hauteur initiale (en cm) : ";
	cin >> hauteur;

	while (hauteur > 10) {
		nbRebond += 1;
		hauteur -= (hauteur / 5);
	}

	cout << "Il faudra " << nbRebond << " rebond pour atteindre moins de 10 cm" << endl;
}