#include <iostream>
#include "include/person.hpp"
using namespace std;

person::person(int id, std::string nama, int dd, string mm, int yy)
		: id(id), nama(nama), dd(dd), mm(mm), yy(yy)
{
}

void person::setId(int id)
{
	this->id = id;
}

int person::getId() 
{
	return this->id;
}

void person::setNama(std::string nama)
{
	this->nama = nama;
}

std::string person::getNama()
{
	return this->nama;
}

void person::setTglLahir(int dd, string mm, int yy)
{
	this->dd = dd;
	this->mm = mm;
	this->yy = yy;
}

int person::getTglLahir()
{
	return this->dd;
}

string person::getBulanLahir()
{
	return this->mm;
}

int person::getTahunLahir()
{
	return this->yy;
}


