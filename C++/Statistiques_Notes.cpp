#include <iostream>

using namespace std;

int main() {

	int noteSaisie = 0;
	int nbrNotemax = 0;
	int nbrNoteMin = 0;
	int noteMax = 0;
	int noteMin = 0;

	cout << "Donnez une note (-1 pour finir) : ";
	cin >> noteSaisie;
	while (noteSaisie >= 0) {
		if (noteSaisie == noteMax) {
			nbrNoteMax += 1;
		}
		else if (noteSaisie > noteMax) {
			noteMax = noteSaisie;
			nbrNoteMax = 1;
		}
		else if (noteSaisie == noteMin) {
			nbrNoteMin += 1;
		}
		else if (noteSaisie < noteMin && noteSaisie >= 0) {
			noteMin = noteSaisie;
			nbrNoteMin = 1;
		}
		cout << "Donnez une note (-1 pour finir) : ";
		cin >> noteSaisie;
	}

	if (noteMax >= 0) {
		cout << "Note max : " << noteMax << " attribuee " << nbrNoteMax << " fois." << endl;
		cout << "Note min : " << noteMin << " attribuee " << nbrNoteMin << " fois." << endl;
	}
	else {
		cout << "Vous n'avez fourni aucune note" << endl;
	}
}