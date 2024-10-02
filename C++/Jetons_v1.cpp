#include <iostream>

using namespace std;

const int hauteur = 10;
const int largeur = 10;

bool tabl[largeur][hauteur] =
{  //1, 2, 3, 4, 5, 6, 7, 8, 9, 10
	{0, 0, 0, 0, 0, 0, 1, 0, 0, 0},//1
	{0, 0, 0, 0, 0, 0, 1, 0, 1, 0},//2
	{0, 0, 0, 0, 0, 0, 1, 0, 1, 1},//3
	{0, 0, 0, 0, 0, 0, 1, 0, 1, 1},//4
	{0, 0, 0, 0, 0, 0, 1, 0, 1, 1},//5
	{1, 0, 0, 0, 0, 0, 1, 0, 1, 1},//6
	{1, 1, 0, 0, 0, 0, 1, 0, 1, 1},//7
	{1, 1, 0, 0, 0, 0, 1, 0, 1, 1},//8
	{1, 1, 0, 0, 0, 0, 1, 0, 1, 1},//9
	{1, 1, 0, 0, 0, 0, 1, 0, 1, 1},//10
};

int hauteurmax = 0;
int colonnemax = 0;
int hauteurtemp = 0;


int main() {
	for (int ligne = 0; ligne <= hauteur - 1;) {
		for (int colonne = 0; colonne <= largeur - 1;) {
			if (tabl[colonne][ligne] == 1) {
				hauteurtemp++;
			}
			colonne++;
		}
		if (hauteurtemp > hauteurmax) {
			hauteurmax = hauteurtemp;
			colonnemax = ligne;
		}
		hauteurtemp = 0;
		ligne++;
	}
	cout << "La plus grande colonne est la colonne " << colonnemax + 1 << " avec une hauteur de " << hauteurmax << endl;
}


