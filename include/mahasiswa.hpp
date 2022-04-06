#ifndef __MAHASISWA_HPP__
#define __MAHASISWA_HPP__


#include <iostream>
#include "include/person.hpp"

class mahasiswa : public person {
private:
	std::string nrp;
	std::string departemen;
	int tahunmasuk;
	int semesterke;
	int skslulus;
	float ipk;
	std::vector<float> ips;

public:
	mahasiswa(int id, std::string nama, int dd, int mm, int yy,
					std::string nrp, std::string departemen, int tahunmasuk,int semesterke,int skslulus);

	void setSemester(int semesterke);
	int getSemester();

	void setSKSLulus(int skslulus);
	int getSKSLulus();

	void hitungIPK();

	std::string getNRP();

	std::string getDepartemen();

	int getTahunMasuk();

	void setIPS(int semester, float ips);
	float getIPS(int semester);
	std::vector<float> getAllIPS();
};

#endif