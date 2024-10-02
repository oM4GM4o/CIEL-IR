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

int hauteurmax = hauteur;
int colonnemax = - 1;


int main() {
	for (int colonne = 0; colonne <= largeur - 1;) {
		while(tabl[hauteurmax][colonne] != 0) {
			hauteurmax--;
			colonnemax = colonne;
		}
		colonne++;
	}
	cout << "La plus grande colonne est la colonne " << colonnemax + 1 << " avec une hauteur de " << hauteur - hauteurmax - 1 << endl;
}


