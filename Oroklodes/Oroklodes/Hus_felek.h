#pragma once
#include <string>
#include <iostream>

using namespace std;
class Hus_felek:public Termekek
{
public:
	Hus_felek(string n, int a, int af, string t, string em, string f) : Termekek(n, a, af,t) {
		this->elkeszitesi_mod = em;
		this->fajta = f;
	}
	~Hus_felek() = default;
	string GetElk_mod() const {
		return this->elkeszitesi_mod;
	}
	string GetFajta() const {
		return this->fajta;
	}

	void SetElk_mod(string sem) {
		this->elkeszitesi_mod=sem;
	}
	void SetFajta(string sf){
		this->fajta=sf;
	}
	void osszadat() {
		cout << nev << " " << ar << " " << afa << " " << tarolas << " " << elkeszitesi_mod << " " << fajta;
	}
private:
	string elkeszitesi_mod;
	string fajta;
};

