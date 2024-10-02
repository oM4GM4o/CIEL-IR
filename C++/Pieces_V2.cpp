#include <iostream>

using namespace std;

int main() {

	int nbManiere = 0;
	int nbP1 = 0;
	int nbP2 = 0;
	int nbP3 = 0;
	int valP1 = 0;
	int valP2 = 0;
	int valP3 = 0;
	double somme = 0;

	cout << "Entrez la somme à calculer : ";
	cin >> somme;
	cout << "Entrez la somme de la première pièce : ";
	cin >> valP1;
	cout << "Entrez la somme de la deuxième pièce : ";
	cin >> valP2;
	cout << "Entrez la somme de la troisième pièce : ";
	cin >> valP3;

	for (nbP1 = 0; nbP1 <= valP1; nbP1++) {
		for (nbP2 = 0; nbP2 <= valP2; nbP2++) {
			for (nbP3 = 0; nbP3 <= valP3; nbP3++) {
				if (valP1 * nbP1 + valP2 * nbP2 + valP3 * nbP3 == somme) {
					nbManiere += 1;
					cout << somme / 100 << "  euro = ";
					if (nbP1 != 0) {
						cout << nbP1 << "x " << valP1 << "c ";
					}
					if (nbP2 != 0) {
						cout << nbP2 << "x " << valP2 << "c ";
					}
					if (nbP3 != 0) {
						cout << nbP3 << "x " << valP3 << "c ";
					}
					cout << endl;
				}
			}
		}
	}
	cout << "En tout, il y a " << nbManiere << " de faire" << (somme / 100) << " euro.";
}