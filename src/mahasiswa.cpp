#include <iostream>
#include <vector>
#include <string>
#include <fstream>

#include "include/mahasiswa.hpp"

using namespace std;

mahasiswa::mahasiswa(int id, std::string nama, int dd, int mm, int yy, 
				std::string nrp, std::string departemen, int tahunmasuk, int semesterke,int skslulus)
		: person(id, nama, dd, mm, yy), nrp(nrp), departemen(departemen), tahunmasuk(tahunmasuk), semesterke(semesterke), skslulus(skslulus)
{
}

void mahasiswa::setSemester(int semesterke)
{
	this->semesterke = semesterke;
}

int mahasiswa::getSemester()
{
	return this->semesterke;
}

void mahasiswa::setSKSLulus(int skslulus)
{
	this->skslulus = skslulus;
}

int mahasiswa::getSKSLulus()
{
	return this->skslulus;
}

void mahasiswa::hitungIPK()
{
}

void mahasiswa::setIPS(int semester, float ips)
{
	// semester mulai dari 1
	if (semester < 15) {
		this->ips[semester-1] = ips;
		this->hitungIPK();
	}
}

float mahasiswa::getIPS(int semester)
{
	if (semester < 15)
		return this->ips[semester-1];

	return -1.0;
}

string mahasiswa::getDepartemen()
{
	return this->departemen;
}

string mahasiswa::getNRP()
{
	return this->nrp;
}

int mahasiswa::getTahunMasuk()
{
	return this->tahunmasuk;
}

std::vector<float> mahasiswa::getAllIPS()
{
	return this->ips;
}




