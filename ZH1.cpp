#include <iostream>
#include <cstdlib>
#include<string>

using namespace std;
//1. feladat
void lefoglal(int*& tomb, int meret)
{
	tomb = (int*)calloc(sizeof(int), meret);
}
void lefoglal_char(char*& tomb, int meret)
{
	tomb = (char*)calloc(sizeof(char), meret);
}
void feltolt_Random_betu(char*& tombKarakter)
{
	for (int i = 0; i < 128; i++)
	{
		int randommelyik = rand() % 50;
		if (randommelyik >= 25)
		{
			tombKarakter[i] = rand() % (90 + 1 - 65) + 65;
		}
		else
		{
			tombKarakter[i] = rand() % (122 + 1 - 97) + 97;
		}
	}
}
void nagybetu(char*& tomb1)
{
	for (int i = 0; i < 128; i++)
	{
		int szam = tomb1[i];
		if (tomb1[i] >= 97 && tomb1[i] <= 122)
		{
			tomb1[i] = toupper(tomb1[i]);
		}
	}
}
void kisbetu(char*& tomb1)
{
	for (int i = 0; i < 128; i++)
	{
		int szam = tomb1[i];
		if (tomb1[i] >= 65 && tomb1[i] <= 90)
		{
			tomb1[i] = tolower(tomb1[i]);
		}
	}
}
void melyikkonverzio(char mely, char*& tombN,char*& tombK)
{
	if (mely=='k')
	{
		cout << "\n\nKisbetûs karakterek:" << endl;
		kisbetu(tombK);
		for (int i = 0; i < 128; i++)
		{
			cout << tombK[i] << " ";
		}
	}
	else
	{
		cout << "\n\nNagybetûs karakterek:" << endl;
		nagybetu(tombN);
		for (int i = 0; i < 128; i++)
		{
			cout << tombN[i] << " ";
		}
	}
}
void ujkarakter(char karakter, char*& tomb, bool beszur)
{
	beszur = false;
	for (int i = 0; i < 200; i++)
	{
		if (tomb[i]==karakter)
		{
			beszur = false;
			break;
		}
		else
		{
			beszur = true;
		}
	}
	if (beszur==false)
	{
		cout << "\nA beszúrás nem lehetséges"<<endl;
	}
	else
	{
		for (int i = 0; i < 200; i++)
		{
			if (tomb[i]=='\0')
			{
				tomb[i] = karakter;
				break;
			}
		}
		for (int i = 0; i < 200; i++)
		{
			cout << tomb[i] << " ";
		}
	}
}
int bumm(int*& tomb, int mennyi)
{
	int szam = mennyi;
	for (int i = 0; i < szam; i++)
	{
		if (tomb[i]==0)
		{
			szam = szam - 1;
		}
	}
	return szam;
}
//2. feladat
string aknakereso()
{
	int alap = 5, jotalalat = 10, rossz = -1;
	int milyen_mezomeret=0;
	cout << "\n\nAdja meg milyen méretû legyen a mezõ"<<endl;
	cin >> milyen_mezomeret;
	int meret = milyen_mezomeret * milyen_mezomeret;
	cout << "A mezõ mérete: " << meret << " azaz " << milyen_mezomeret << "x"<<milyen_mezomeret<<endl;
	int aknakszama = rand() % ((meret * 2) + 1 - meret) + meret;
	cout << "\nAz aknák száma: "<<aknakszama;
	int* tombAknak = nullptr;
	lefoglal(tombAknak, aknakszama);
	/*int hol_Vagyok = 0;
	while (hol_Vagyok == aknakszama - 1)
	{
		for (int i = 0; i < aknakszama; i++)
		{
			int szam = rand() % meret + 1;
			if (szam == tombAknak[i])
			{
				szam = rand() % meret + 1;
			}
			else
			{
				tombAknak[hol_Vagyok] = szam;
			}
		}
	}*/
	for (int i = 0; i < aknakszama; i++)
	{
		int szam = rand() % meret + 1;
		tombAknak[i] = szam;
	}
	cout << "\n";
	while (alap>0 || aknakszama!=0)
	{
		bool jo = false;
		int tipp = 0;
		cin >> tipp;
		for (int i = 0; i < aknakszama; i++)
		{
			if (tipp==tombAknak[i])
			{
				alap += 10;
				tombAknak[i] = 0;
				jo = true;
				aknakszama -= 1;
				break;
			}
		}
		if (jo==false)
		{
			alap = alap - 1;
		}
		cout <<"\nPontszám: "<< alap<<endl;
		cout << "\Aknák száma: " << aknakszama << endl;
		if (aknakszama==0)
		{
			string grt = "Gratulálunk Ön Nyert!";
			return grt;
		}
		if (alap<=0)
		{
			string sad = "A pontjai elfogytak";
			return sad;
		}
	}
}
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "hun");
	int* tomb1 = nullptr;
	lefoglal(tomb1, 128);
	cout << "A tömb elemei feltöltés elõtt:" << endl;
	for (int i = 0; i < 128; i++)
	{
		cout << tomb1[i] << " ";
	}
	for (int i = 0; i < 128; i++)
	{
		tomb1[i] = rand() % 255;
	}
	cout << "\n\nA tömb elemei feltöltés után:" << endl;
	for (int i = 0; i < 128; i++)
	{
		cout << tomb1[i] << " ";
	}
	char* tombKarakter = nullptr;
	lefoglal_char(tombKarakter, 128);
	//65-90: Nagybetû 97-122: Kis betû
	feltolt_Random_betu(tombKarakter);
	cout << "\n\nAz eredeti karakterhalmaz: " << endl;
	for (int i = 0; i < 128; i++)
	{
		cout << tombKarakter[i]<<" ";
	}
	char* tombNagybetu = nullptr;
	lefoglal_char(tombNagybetu, 128);
	char* tombKisbetu = nullptr;
	lefoglal_char(tombKisbetu, 128);
	char* tombBeszurt = nullptr;
	lefoglal_char(tombBeszurt, 200);
	for (int i = 0; i < 128; i++)
	{
		tombNagybetu[i] = tombKarakter[i];
		tombKisbetu[i] = tombKarakter[i];
		tombBeszurt[i] = tombKarakter[i];
	}
	char valasz;
	cout << "\n\nVálasszon opciót! k-kisbetû, n-nagybetû" << endl;
	cin >> valasz;
	melyikkonverzio(valasz, tombNagybetu, tombKisbetu);
	
	bool lehet = false;
	char karakter_valasztott;
	cout << "\n\nAdjon meg egy karaktert" << endl;
	cin >> karakter_valasztott;
	ujkarakter(karakter_valasztott, tombBeszurt, lehet);
	cout << "\n2. feladat\n";
	cout<<aknakereso();
	return 0;
}