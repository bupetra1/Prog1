#pragma once
#include <string>
#include <iostream>

using namespace std;
class Termekek
{
protected://közös tulajdonságok
	string nev;
	int ar;
	int afa;
	string tarolas;
public:
	Termekek(string n, int a, int af, string ta) {
		this->nev = n;
		this->ar = a;
		this->afa = af;
		this->tarolas = ta;
	}
	~Termekek() = default;
	string getNev() const {
		return this->nev;
	}
	int getAr() const {
		return this->ar;
	}
	int getAfa() const {
		return this->afa;
	}
	string getTarolas() const {
		return this->tarolas;
	}

	void setNev(string sn) {
		this->nev = sn;
	}
	void setAr(int sa) {
		this->ar=sa;
	}
	void setAfa(int saf) {
		this->afa=saf;
	}
	void setTarolas(string st) {
		this->tarolas=st;
	}
};

