#include <iostream>

using namespace std;

int main() {

	int note = 0;
	cout << "Entrez votre note:";
	cin >> note;

	if (note < 8) {
		cout << "Ajourne";
	}
	else if (note >= 8 && note < 10) {
		cout << "Admis au second tour";
	}
	else if (note >= 10 && note < 12) {
		cout << "Admis, mention P";
	}
	else if (note >= 12 && note < 14) {
		cout << "Admis, mention AB";
	}
	else if (note >= 14 && note < 16) {
		cout << "Admis, mention B";
	}
	else if (note >= 16) {
		cout << "Admis, mention TB";
	}
}