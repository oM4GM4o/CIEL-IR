#include <iostream>
#include <time.h>

const int echantillon = 100;
const int nb = 100;
int table[nb];
int quantity[10];


using namespace std;

void generate();
void count(int tab[], int nb);
void printResult();

int main() {
	time_t timer = time(0);
	srand(static_cast<unsigned>(timer));
	generate();
	count(table, nb);
	printResult();
}

void generate() {
	for (int i = 0; i < nb; i++) {
		table[i] = rand() % echantillon;
	}
}

void count(int tab[], int nb) {
	for (int i = 0; i < nb; i++) {
		int pos = 0;
		for (int max = 10; max <= nb;) {
			if (tab[i] >= max - 10 && tab[i] < max) {
				quantity[pos] += 1;
				break;
			}
			max += 10;
			pos++;
		}
	}
}

void printResult() {
	int pos = 0;
	for (int max = 10; max <= nb;) {
		cout << "Echantillons entre " << max - 10 << " et " << max << ": " << quantity[pos] << endl;
		max += 10;
		pos++;
	}
}

