#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
	const int cases = 66;
	int pos = 0;
	int avance = 0;
	int de1 = 0;
	int de2 = 0;
	while (pos != cases) {
		cout << "Avancer de (1 - 12) : ";
		de1 = rand() % 6 + 1;
		de2 = rand() % 6 + 1;
		//avance = de1 + de2;
		cin >> avance;
		if (avance >= 1 && avance <= 12) {
			pos += avance;
			cout << "Vous avancez de " << avance << " cases" << " | " << pos << endl;
			if (pos % 9 == 0 && pos != 0 && pos < 66) {
				pos += avance;
				cout << "Vous re-avancez de " << avance << " cases" << " | " << pos << endl;
			}
			else if (pos == 58) {
				cout << "Vous revenez à la case 0" << endl;
				pos = 0;
			}
			else if (pos > 66) {
				pos = pos - avance - (pos - 68);
				cout << "Vous reculez de " << pos - 66 << " cases" << " | " << pos << endl;
			}
		}
		else {
			cout << "Entrez une valeur valide(1 - 12)" << endl;
		}
	}
	cout << "Jeu termine, felicitations!";
}