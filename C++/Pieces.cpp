#include <iostream>

using namespace std;

int main() {
	int nbManiere = 0;
	int nbP10 = 0;
	int nbP5 = 0;
	int nbP2 = 0;

	for (nbP10 = 0; nbP10 <= 10; nbP10++) {
		for (nbP5 = 0; nbP5 <= 20; nbP5++) {
			for (nbP2 = 0; nbP2 <= 50; nbP2++) {
				if (2 * nbP2 + 5 * nbP5 + 10 * nbP10 == 100) {
					nbManiere += 1;
					cout << " 1 euro = ";
					if (nbP2 != 0) {
						cout << nbP2 << "x2c ";
					}
					if (nbP5 != 0) {
						cout << nbP5 << "x5c ";
					}
					if (nbP10 != 0) {
						cout << nbP10 << "x10c ";
					}
					cout << endl;
				}
			}
		}
	}
	cout << "En tout, il y a " << nbManiere << " de faire 1 euro.";
}