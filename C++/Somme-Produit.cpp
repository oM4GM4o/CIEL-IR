#include <iostream>

using namespace std;

int main() {

	int i = 0;
	int n = 0;
	int somme = 0;
	int factorielle = 1;

	cout << "Donner n:";
	cin >> n;

	for (i = 1; i <= n; i++) {
		somme = somme + i;
		factorielle = factorielle * i;
	}

	cout << "La somme est : " << somme << endl;
	cout << "La factorielle est : " << factorielle << endl;
}