#ifndef __DOSEN_HPP__
#define __DOSEN_HPP__

#include <iostream>
#include <string>
#include "include/person.hpp"

class dosen : public person {
private:
	std::string npp;
	std::string departemen;
	std::string pendidikan;

public:
	dosen(int id, std::string nama, int dd, std::string mm, int yy, std::string npp, std::string departemen, std::string pendidikan);

	void setPendidikan(std::string pendidikan);
	std::string getPendidikan();

	void setNPP(std::string npp);
	std::string getNPP();
	
	std::string getDepartemen();
	void setDepartemen(std::string departemen);
};


#endif 
