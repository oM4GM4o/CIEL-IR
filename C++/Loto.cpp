#include <iostream>

using namespace std;


double factorielle(double nb) {
	double resultat = 1;
	if (nb == 0) {
		return 1;
	}
	else {
		for (int k = 2; k < nb + 1; k++) {
			resultat *= k;
		}
	}
	return(resultat);
}

double calcule(double n, double p) {
	return(factorielle(n) / (factorielle(p) * factorielle(n - p)));
}

int main() {
	double n;
	double p;
	do {
		cout << "Entrez n : ";
		cin >> n;
		cout << "Entrez p : ";
		cin >> p;
		cout << "Combinaison de " << p << " parmis " << n << " est " << calcule(n, p) << endl;
	} while (n >= p);
}
