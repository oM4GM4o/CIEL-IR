#include <iostream>

using namespace std;

int main() {

	int nbLignes = 0;
	int nbEspace = 0;
	int i = 0;
	int j = 0;
	int n = 0;

	cout << "Combien de lignes?";
	cin >> nbLignes;
	for (n = 1; n <= nbLignes; n++) {
		nbEspace = nbLignes - n;
		for (i = 1; i <= nbEspace; i++) {
			cout << " ";
		}
		for (j = 1; j <= 2 * n - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
}