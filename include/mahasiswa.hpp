#ifndef __MAHASISWA_HPP__
#define __MAHASISWA_HPP__


#include <iostream>
#include <string>
#include <fstream>
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
	mahasiswa(int id, std::string nama, int dd, std::string mm, int yy,
					std::string nrp, std::string departemen, int tahunmasuk,int semesterke,int skslulus);

	void setSemester(int semesterke);
	int getSemester();

	void setSKSLulus(int skslulus);
	int getSKSLulus();

	void hitungIPK();

	std::string getNRP();
	void setNRP(std::string nrp);

	std::string getDepartemen();
	void setDepartemen(std::string departemen);

	int getTahunMasuk();
	void setTahunmasuk(int tahunmasuk);

	void setIPS(int semester, float ips);
	float getIPS(int semester);
	std::vector<float> getAllIPS();
};

#endif
