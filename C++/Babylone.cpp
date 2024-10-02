#include <iostream>

using namespace std;

double racine_carre(double a, double n) {
	if (n == 0) {
		n = 1;
	}
	else {
		for (int i = 0; i < n; i++) {
			n = ((n + (a / n)) / 2);
		}
	}
	return(n);
}

int main() {
	double a;
	cout << "Entrez a : ";
	cin >> a;
	cout << "La racine de " << a << " avec une précision de " << n << " est de " << racine_carre(a, n) << endl;
}