#include <iostream>

using namespace std;
#include "include/dosen.hpp"
#include <string>

using namespace std;

dosen::dosen(int id, std::string nama, int dd, std::string mm, int yy, std::string npp, std::string departemen, std::string pendidikan)
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

std::string dosen::getNPP()
{
	return this->npp;
}
void dosen::setNPP(std::string npp)
{
	this->npp = npp;
}
string dosen::getDepartemen()
{
	return this->departemen;
}
void dosen::setDepartemen(std::string departemen)
{
	this->departemen = departemen;
}
