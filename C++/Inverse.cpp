#include <iostream>

using namespace std;

const int sizet = 10;

int tabl[sizet] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int gauchetemp = 0;
int droitetemp = 0;
int j = 0;
int k = sizet - 1;

void print() {
	for (int i = 0; i < sizet;) {
		cout << " | " << tabl[i];
		i++;
	}
	cout << endl;
}

int main() {
	print();
	while (j <= k) {
		gauchetemp = tabl[j];
		droitetemp = tabl[k];
		tabl[j] = droitetemp;
		tabl[k] = gauchetemp;
		j++;
		k--;
	}
	print();
}