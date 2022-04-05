#include <iostream>
#include <vector>
#include <string>
#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	while(1) {
		cout << "Selamat datang di Universitas Beryl" << endl << endl;
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
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;
		cin.ignore();

		switch (menu_terpilih) {
			case 1:
			{
				string nrp,nama,departemen;
				int id,dd,mm,yy,tahunmasuk,semesterke,skslulus;

				cout << "Masukkan Nama 	:";
				getline(cin,nama);
				cout << "Masukkan Hari Lahir (angka) 	:";
				cin >> dd;
				cout << "Masukkan Bulan Lahir (angka) 	:";
				cin >> mm; 
				cout << "Masukkan Tahun Lahir 	:";
				cin >> yy;
				cout << "Masukkan NRP 	:";
				cin >> nrp;
				cout << "Masukkan Departemen 	:";
				cin >> departemen;
				cout << "Masukkan Tahun Masuk 	:";
				cin >> tahunmasuk;
				cout << "Masukkan Semester saat ini 	:";
				cin >> semesterke;
				cout << "Masukkan SKS yang telah lulus 	:";
				cin >> skslulus;

				mahasiswa Mahasiswa(id,nama,dd,mm,yy,nrp,departemen,tahunmasuk,semesterke,skslulus);
				recMhs.push_back(Mahasiswa);
			}
				break;
			case 2:
			{
				string  nama, npp, departemen,pendidikan;
				int id,dd, mm, yy;

				cout << "Masukkan Nama 	:";
				cin >> nama;
				cout << "Masukkan Hari Lahir (angka) 	:";
				cin >> dd;
				cout << "Masukkan Bulan Lahir (angka) 	:";
				cin >> mm; 
				cout << "Masukkan Tahun Lahir 	:";
				cin >> yy;
				cout << "Masukkan NPP 	:";
				cin >> npp;
				cout << "Masukkan Departemen 	:";
				cin >> departemen;
				cout << "Masukkan Pendidikan Terakhir :";
				cin >> pendidikan;

				dosen Dos(id,nama,dd,mm,yy,npp,departemen,pendidikan);
				recDosen.push_back(Dos);
			}
				break;
			case 3:
			{
				string  nama, npp, unit;
				int id,dd, mm, yy;

				cout << "Masukkan Nama 	:";
				cin >> nama;
				cout << "Masukkan Hari Lahir (angka) 	:";
				cin >> dd;
				cout << "Masukkan Bulan Lahir (angka) 	:";
				cin >> mm; 
				cout << "Masukkan Tahun Lahir :";
				cin >> yy;
				cout << "Masukkan NPP :";
				cin >> npp;
				cout << "Masukkan Unit :";
				cin >> unit;

				tendik TD(id,nama,dd,mm,yy,npp,unit);
				recTendik.push_back(TD);
				
			}
				break;
			case 4:
			{
				for (unsigned i=0; i<= recMhs.size();i++)
				{
					cout << "Nama Mahasiswa :"<< recMhs[i].getNama() << endl;
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
				for (unsigned i=0; i<= recDosen.size();i++)
				{
					cout << "Nama Dosen :"<< recDosen[i].getNama() << endl;
					cout << "Tanggal lahir :"<< recDosen[i].getTglLahir() << "-" << recDosen[i].getBulanLahir() << "-"<< recDosen[i].getTahunLahir() << endl;
					cout << "NPP :"<< recDosen[i].getNPP() << endl;
					cout << "Departemen  :"<< recDosen[i].getDepartemen() << endl;
					cout << "Pendidikan Terakhir  :"<< recDosen[i].getPendidikan() << endl << endl;
				}
			}
				break;
			case 6:
			{
				for (unsigned i=0; i<= recTendik.size();i++)
				{
					cout << "Nama Tenaga Didik :"<< recTendik[i].getNama() << endl;
					cout << "Tanggal lahir :"<< recTendik[i].getTglLahir() << "-" << recTendik[i].getBulanLahir() << "-"<< recTendik[i].getTahunLahir() << endl;
					cout << "NPP :"<< recTendik[i].getNPP() << endl;
					cout << "Unit  :"<< recTendik[i].getUnit() << endl << endl;
				}
			}
				break;
		}
	}

	return 0;
}
