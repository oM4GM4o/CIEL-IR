#include <iostream>

using namespace std;

int main() {

	int a = 0;
	int b = 0;
	int quotient, reste;

	cout << "Valeur de a:";
	cin >> a;
	cout << "Valeur de b:";
	cin >> b;

	if (b != 0) {
		quotient = a / b;
		reste = a % b;
		cout << "Le quotient de " << a << " divise par " << b << " est " << quotient << endl;
		cout << "Le reste de " << a << " divise par " << b << " est " << reste << endl;
	}
	else {
		cout << "Division par 0 impossible";
	}
}