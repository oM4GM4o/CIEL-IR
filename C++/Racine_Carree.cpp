#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double nbLu = 0;
	double resultat = 0;

	do {
		cout << "Donnez un nombre positif : ";
		cin >> nbLu;
		if (nbLu > 0) {
			resultat = sqrt(nbLu);
			cout << "Sa racine carree est : " << resultat << endl;
		}
		else {
			cout << "Positif SVP";
		}
	} while (nbLu != 0);
}