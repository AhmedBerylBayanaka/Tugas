#include <iostream>

using namespace std;
#include "include/dosen.hpp"

dosen::dosen(int id, std::string nama, int dd, int mm, int yy, std::string npp, std::string departemen, std::string pendidikan)
		: person(id, nama, dd, mm, yy), npp(npp), departemen(departemen), pendidikan(pendidikan)
{
}

void dosen::setPendidikan(std::string pendidikan)
{
	this->pendidikan = pendidikan;
}

string dosen::getPendidikan()
{
	return this->pendidikan;
}

int dosen::getNPP()
{
	this->npp;
}
string dosen::getDepartemen()
{
	this->departemen;
}
