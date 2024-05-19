#pragma once
#include <string>
#include <iostream>

using namespace std;
class Tejtermek :public Termekek
{
public:
	Tejtermek(string n, int a, int af, string t, string type, bool k) : Termekek(n, a, af, t) {
		this->tipus = type;
		this->keszitmeny = k;
	}
	~Tejtermek() = default;
	string GetTipus() const {
		return this->tipus;
	}
	bool GetKeszitmeny() const {
		if (keszitmeny==true)
		{
			return "Készítmény";
		}
		else
		{
			return "Tej";
		}
	}

	void SetTipus(string st) {
		this->tipus = st;
	}
	void SetKeszitmeny(bool sk) {
		this->keszitmeny = sk;
	}
	void osszadat() {
		cout << nev << " " << ar << " " << afa << " " << tarolas << " " << tipus << " " << GetKeszitmeny();
	}
private:
	string tipus;
	bool keszitmeny;
};


