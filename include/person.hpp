#ifndef __PERSON_HPP__
#define __PERSON_HPP__

#include <iostream>

class person {
private:
	int id;
	std::string nama, mm;
	int dd, yy;

public:
	person(int id, std::string nama, int dd, std::string mm, int yy);

	void setId(int id);
	int getId();

	void setNama(std::string nama);
	std::string getNama();

	void setTglLahir(int dd, std::string mm, int yy);
	int getTglLahir();
	std::string getBulanLahir();
	int getTahunLahir();
};


#endif
