#include "Szia.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
int main()
{
	setlocale(LC_ALL, "hun");
	//Fájl létrehozása
	ofstream Korte("korte.txt");
	Korte << "A körte egy gyümölcs";
	Korte.close();

	//Fájl beolvasás
	string beolvasott_sor;
	ifstream beolvasas("korte.txt", fstream::app);
	while (getline(beolvasas,beolvasott_sor))
	{
		cout << beolvasott_sor << endl;
	}
	beolvasas.close();

	//Karakterek száma
	char szoveg[256];
	cout << "Adjon meg egy szót: ";
	cin.getline(szoveg,256);
	cout << cin.gcount() << " a beolvasott karakterek száma.";

	//Bináris fájl beolvasás
	//binaris
	int n = 5;
	ifstream input;
	ofstream output;
	char buffer[256];

	output.open("pelda.bin", std::ios::out | std::ios::binary);
	output.write((char*)&n, sizeof(int));
	output.write(buffer, 256);
	//output.write((char*)&M, sizeof(Mercedes));
	output.close();

	input.open("pelda.bin", std::ios::in | std::ios::binary);
	input.read((char*)&n, sizeof(int));
	input.read(buffer, 256);
	input.close();
	return 0;
}
