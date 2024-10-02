#include <iostream>

using namespace std;

int main() {
	int taille = 0;
	int ligne = 0;
	int colonne = 0;
	char motif = '*';

	cout << "Entrez la taille : ";
	cin >> taille;

	for (ligne = 1; ligne <= taille; ligne++) {
		for (colonne = 1; colonne <= taille; colonne++) {
			if (colonne == ligne || ligne + colonne - 1 == taille) {
				cout << motif;
			}
			else {
				cout << ' ';
			}
		}
		cout << endl;
	}
}