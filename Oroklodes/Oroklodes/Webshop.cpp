#include "Termekek.h"
#include "Hus_felek.h"
#include "Tejtermek.h"
#include "Gyumolcs_Zoldseg.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	Hus_felek h1("Lapocka", 2000, 5, "fagyaszt�", "s�t�s", "diszn�");
	h1.osszadat();
	Tejtermek t1("Tej", 300, 27, "H�t� (0-5C)", "Lakt�zmentes", false);
	t1.osszadat();
}
