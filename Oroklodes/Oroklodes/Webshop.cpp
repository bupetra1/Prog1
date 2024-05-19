#include "Termekek.h"
#include "Hus_felek.h"
#include "Tejtermek.h"
#include "Gyumolcs_Zoldseg.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	Hus_felek h1("Lapocka", 2000, 5, "fagyasztó", "sütés", "disznó");
	h1.osszadat();
	Tejtermek t1("Tej", 300, 27, "Hûtõ (0-5C)", "Laktózmentes", false);
	t1.osszadat();
}
