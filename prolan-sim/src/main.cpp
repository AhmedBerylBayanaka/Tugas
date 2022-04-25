#include <iostream>
#include <vector>
#include <string>
#include <sstream>

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
		cout << "Selamat datang di Universitas X" << endl << endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " mahasiswa" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " mahasiswa" << endl;
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

		switch (menu_terpilih) {
			case 1:
			{	
				string id, nama, nrp, departemen;
				int dd,mm,yy, tahunmasuk;

				stringstream ss;
				ss <<  1 + recMhs.size();
				id = ss.str();


				cout << "aku butuh nama :" << endl;
				cin >> nama;

				
				mahasiswa monyet(id, nama, dd, mm, yy , nrp, departemen, tahunmasuk);


			}
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
			{
				for(long i=0 ; i < recMhs.size(); i++){
					cout << "Nama Mahasiswa :" << recMhs[i].getNama() << endl;
				}
			}
				break;
			case 5:
				break;
			case 6:
				break;
		}
	}

	return 0;
}
