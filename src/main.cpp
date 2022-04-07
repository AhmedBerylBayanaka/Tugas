#include <iostream>
#include <vector>
#include <string>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"
//#include "include/DBase.hpp"

using namespace std;

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	while(1) {
		cout << "\n Selamat datang di Universitas Beryl" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " dosen" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " tenaga kependidikan" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "  7. edit data" << endl;
		cout << "-> Silahkan memilih salah satu: " << endl;
		cin >> menu_terpilih;
		

		switch (menu_terpilih) {
			case 1:
			{
				string nrp,nama,departemen,mm;
				int id,dd,yy,tahunmasuk,semesterke,skslulus;
				//++id;

				cout << "Masukkan Nama 	:";
				cin.ignore();
				getline(cin,nama);
				cout << "Masukkan Hari Lahir (dd) :";
				cin >> dd;
				cout << "Masukkan Bulan Lahir (month):";
				cin >> mm; 
				cout << "Masukkan Tahun Lahir (yyyy):";
				cin >> yy;
				cout << "Masukkan NRP :";
				cin >> nrp;
				cout << "Masukkan Departemen :";
				cin.ignore();
				getline(cin,departemen); 
				cout << "Masukkan Tahun Masuk :";
				cin >> tahunmasuk;
				cout << "Masukkan Semester saat ini :";
				cin >> semesterke;
				cout << "Masukkan SKS yang telah lulus :";
				cin >> skslulus;

				mahasiswa Mahasiswa(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk, semesterke, skslulus);
				recMhs.push_back(Mahasiswa);
			}
				break;
			case 2:
			{
				string  nama, npp, departemen,pendidikan, mm;
				int id,dd, yy;

				cout << "Masukkan Nama :";
				cin >> nama;
				cout << "Masukkan Hari Lahir (dd) :";
				cin >> dd;
				cout << "Masukkan Bulan Lahir (month) :";
				cin >> mm; 
				cout << "Masukkan Tahun Lahir (yyyy):";
				cin >> yy;
				cout << "Masukkan NPP :";
				cin >> npp;
				cout << "Masukkan Departemen :";
				cin >> departemen;
				cout << "Masukkan Pendidikan Terakhir :";
				cin >> pendidikan;

				dosen Dos(id, nama, dd, mm, yy, npp, departemen, pendidikan);
				recDosen.push_back(Dos);
			}
				break;
			case 3:
			{
				string  nama, npp, unit, mm;
				int id, dd, yy;

				cout << "Masukkan Nama :";
				cin >> nama;
				cout << "Masukkan Hari Lahir (dd) :";
				cin >> dd;
				cout << "Masukkan Bulan Lahir (month) :";
				cin >> mm; 
				cout << "Masukkan Tahun Lahir (yyyy):";
				cin >> yy;
				cout << "Masukkan NPP :";
				cin >> npp;
				cout << "Masukkan Unit :";
				cin >> unit;

				tendik TD(id, nama, dd, mm, yy, npp, unit);
				recTendik.push_back(TD);
				
			}
				break;
			case 4:
			{
				for (unsigned i=0; i < recMhs.size();i++)
				{
					cout << i + 1 << ")Nama Mahasiswa :"<< recMhs[i].getNama() << endl;
					cout << "Tanggal lahir :"<< recMhs[i].getTglLahir() << "-" << recMhs[i].getBulanLahir() << "-"<< recMhs[i].getTahunLahir() << endl;
					cout << "NRP :"<< recMhs[i].getNRP() << endl;
					cout << "Departemen  :"<< recMhs[i].getDepartemen() << endl;
					cout << "Tahun Masuk  :"<< recMhs[i].getTahunMasuk() << endl;
					cout << "Semester ke- :"<< recMhs[i].getSemester() << endl;
					cout << "SKS yang telah lulus :" << recMhs[i].getSKSLulus() << endl << endl;
				}
			}
				break;
			case 5:
			{
				for (unsigned i=0; i< recDosen.size();i++)
				{
					cout << i + 1 << ")Nama Dosen :"<< recDosen[i].getNama() << endl;
					cout << "Tanggal lahir :"<< recDosen[i].getTglLahir() << "-" << recDosen[i].getBulanLahir() << "-"<< recDosen[i].getTahunLahir() << endl;
					cout << "NPP :"<< recDosen[i].getNPP() << endl;
					cout << "Departemen  :"<< recDosen[i].getDepartemen() << endl;
					cout << "Pendidikan Terakhir  :"<< recDosen[i].getPendidikan() << endl << endl;
				}
			}
				break;
			case 6:
			{
				for (unsigned i=0; i< recTendik.size();i++)
				{
					cout << i + 1 <<")Nama Tenaga Didik :"<< recTendik[i].getNama() << endl;
					cout << "Tanggal lahir :"<< recTendik[i].getTglLahir() << "-" << recTendik[i].getBulanLahir() << "-"<< recTendik[i].getTahunLahir() << endl;
					cout << "NPP :"<< recTendik[i].getNPP() << endl;
					cout << "Unit  :"<< recTendik[i].getUnit() << endl << endl;
				}
			}
				break;
			case 7:
			{
				int ngedit, editMhs, editMhs1, numpang;
				char nanya;
				string numpang2;

				cout << "Silahkan pilih data yang ingin di edit:" << endl;
				cout << "	1. Data Mahasiswa" << endl;
				cout << "	2. Data Dosen" << endl;
				cout << "	3. Data Tendik" << endl;
				cin >> ngedit;
					
					switch (ngedit)
					{
						case 1:
						{
							cout << "Berikut data Mahasiswa yang ada :" << endl;
							for (unsigned i=0; i < recMhs.size();i++)
							{
								cout << i + 1 << ")Nama Mahasiswa :"<< recMhs[i].getNama() << endl;
								cout << "Tanggal lahir :"<< recMhs[i].getTglLahir() << "-" << recMhs[i].getBulanLahir() << "-"<< recMhs[i].getTahunLahir() << endl;
								cout << "NRP :"<< recMhs[i].getNRP() << endl;
								cout << "Departemen  :"<< recMhs[i].getDepartemen() << endl;
								cout << "Tahun Masuk  :"<< recMhs[i].getTahunMasuk() << endl;
								cout << "Semester ke- :"<< recMhs[i].getSemester() << endl;
								cout << "SKS yang telah lulus :" << recMhs[i].getSKSLulus() << endl << endl;

								cout << "Pilih data mahasiswa ke berapa yang ingin di edit : " ;
								cin >> editMhs;

								if((unsigned int)editMhs <= recMhs.size()){
									
									loop:
									
									cout << "Pilih data yang hendak di edit: " ;
									cout << "	1. SKS lulus";
									cout << "	2. Semester";
									
									cin >> editMhs1;

										if(editMhs1 == 1){

											cout << "Masukkan SKS lulus terupdate :";
											cin >> numpang;
											recMhs[editMhs].setSKSLulus(numpang);
											
										}else if(editMhs1 == 2){

											cout << "Masukkan semester terupdate :";
											cin >> numpang;
											recMhs[editMhs].setSemester(numpang);

										}else {
											goto loop;		
										}
										cout << "Apakah masih ingin mengedit? [y/n]: ";
										cin >> nanya;

										if(nanya == 'y'){
											goto loop;
										}else {
											cout << editMhs << ")Nama Mahasiswa :"<< recMhs[i].getNama() << endl;
											cout << "Tanggal lahir :"<< recMhs[i].getTglLahir() << "-" << recMhs[i].getBulanLahir() << "-"<< recMhs[i].getTahunLahir() << endl;
											cout << "NRP :"<< recMhs[i].getNRP() << endl;
											cout << "Departemen  :"<< recMhs[i].getDepartemen() << endl;
											cout << "Tahun Masuk  :"<< recMhs[i].getTahunMasuk() << endl;
											cout << "Semester ke- :"<< recMhs[i].getSemester() << endl;
											cout << "SKS yang telah lulus :" << recMhs[i].getSKSLulus() << endl << endl;
										}
								} 	
							}
						}
							break;
					
					case 2:
					{
						cout << "Berikut data Dosen yang ada :" << endl;
							for (unsigned i=0; i < recMhs.size();i++)
							{
								cout << i + 1 << ") Nama Dosen :"<< recDosen[i].getNama() << endl;
								cout << " Tanggal lahir :"<< recDosen[i].getTglLahir() << "-" << recDosen[i].getBulanLahir() << "-"<< recDosen[i].getTahunLahir() << endl;
								cout << " NPP :"<< recDosen[i].getNPP() << endl;
								cout << " Departemen  :"<< recDosen[i].getDepartemen() << endl;
								cout << " Pendidikan Terakhir  :"<< recDosen[i].getPendidikan() << endl << endl;

								cout << "Pilih data dosen ke berapa yang ingin di edit : " ;
								cin >> editMhs;

								if((unsigned int)editMhs <= recDosen.size()){
									
									ulang:

										cout << "Masukkan Pendidikan terakhir terupdate :";
										cin >> numpang;
										recDosen[editMhs].setPendidikan(numpang2);
										
										cout << "Apakah masih ingin mengedit? [y/n]: ";
										cin >> nanya;

										if(nanya == 'y'){

											goto ulang;

										}else {
											cout << editMhs << ") Nama Dosen :"<< recDosen[i].getNama() << endl;
											cout << " Tanggal lahir :"<< recDosen[i].getTglLahir() << "-" << recDosen[i].getBulanLahir() << "-"<< recDosen[i].getTahunLahir() << endl;
											cout << " NPP :"<< recDosen[i].getNPP() << endl;
											cout << " Departemen  :"<< recDosen[i].getDepartemen() << endl;
											cout << " Pendidikan Terakhir  :"<< recDosen[i].getPendidikan() << endl << endl;
										}
								} 	
							}
					}
						break;
					case 3:
					{
						cout << "Berikut data Tenaga Didik yang ada :" << endl;
							for (unsigned i=0; i < recMhs.size();i++)
							{
								cout << i + 1 << ") Nama Tenaga Didik :"<< recTendik[i].getNama() << endl;
								cout << " Tanggal lahir :"<< recTendik[i].getTglLahir() << "-" << recTendik[i].getBulanLahir() << "-"<< recTendik[i].getTahunLahir() << endl;
								cout << " NPP :"<< recTendik[i].getNPP() << endl;
								cout << " Unit  :"<< recTendik[i].getUnit() << endl << endl;

								cout << "Pilih data tenaga didik ke berapa yang ingin di edit : " ;
								cin >> editMhs;

								if((unsigned int)editMhs <= recDosen.size()){
									
									repeat:

										cout << "Masukkan Pendidikan terakhir terupdate :";
										cin >> numpang;
										recTendik[editMhs].setUnit(numpang2);
										
										cout << "Apakah masih ingin mengedit? [y/n]: ";
										cin >> nanya;

										if(nanya == 'y'){

											goto repeat;

										}else {
											cout << editMhs << ") Nama Tenaga Didik :"<< recTendik[i].getNama() << endl;
											cout << " Tanggal lahir :"<< recTendik[i].getTglLahir() << "-" << recTendik[i].getBulanLahir() << "-"<< recTendik[i].getTahunLahir() << endl;
											cout << " NPP :"<< recTendik[i].getNPP() << endl;
											cout << " Unit :"<< recTendik[i].getUnit() << endl << endl;
										}
								} 	
							}
					}
					break;
			}
			break;
		}
	} 

	//Dbase Database = Dbase("data.txt");

	return 0;
	}
}
