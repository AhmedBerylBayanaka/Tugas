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

		cout << "*********************************************" << endl;
		cout << "Selamat datang di Universitas Beryl Cemerlang" << endl;
		cout << "*********************************************" << endl << endl;
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
		//dari sini
		cout << "  7. edit data" << endl; 
		cout << "-> Silahkan memilih salah satu: " << endl;
		cin >> menu_terpilih;
		

		switch (menu_terpilih) {
			case 1:
			{
				int id,dd,yy,tahunmasuk,semesterke,skslulus;
				string nrp,nama,departemen,mm,matkul;
				//++id;

				cout << "KELENGKAPAN DATA PRIBADI MAHASISWA" << endl;
				cout << "Masukkan Nama 	:"; //Ahmed ber
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
				cout << "Masukkan Mata Kuliah yang diikuti di Semester ini";
				cin.ignore();
				getline(cin,matkul);
				mahasiswa Mahasiswa(id, nama, dd, mm, yy, nrp, departemen, tahunmasuk, semesterke, skslulus, matkul);
				recMhs.push_back(Mahasiswa);
			}
				break;
			case 2:
			{
				string  nama, npp, departemen,pendidikan, mm;
				int id, dd, yy;
				
				cout << "KELENGKAPAN DATA PRIBADI DOSEN" << endl;
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

				cout << "KELENGKAPAN DATA PRIBADI TENAGA KEPENDIDIKAN" << endl;
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
					cout << i + 1 <<")Nama Tenaga Kependidikan :"<< recTendik[i].getNama() << endl;
					cout << "Tanggal lahir :"<< recTendik[i].getTglLahir() << "-" << recTendik[i].getBulanLahir() << "-"<< recTendik[i].getTahunLahir() << endl;
					cout << "NPP :"<< recTendik[i].getNPP() << endl;
					cout << "Unit  :"<< recTendik[i].getUnit() << endl << endl;
				}
			}
				break;
			case 7:
			{
				int ngedit, editMhs, editMhs1, numpang, d, y, tahunMasuk, smstrUpdt, sksUpdt;
				char nanya;
				string numpang2, m, nama, NRP, Departemen, pdkUpdt;

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

								if((unsigned int)editMhs <= recMhs.size())
								{
									
									loop:
									
									cout << "Pilih data yang hendak di edit: ";
									cout << "	1. Nama";
									cout << "	2. Tanggal Lahir";
									cout << "	3. NRP";
									cout << "	4. Departemen";
									cout << "	5. Tahun Masuk";
									cout << "	6. Semester";
									cout << "	7. SKS";
									cout << "	8. Semua data";
									
									cin >> editMhs1;
										switch (editMhs1)
										{
										case 1:
											{
												cout << "Masukkan Nama yang benar :";
												cin.ignore();
												getline(cin,numpang2);

												recMhs[editMhs].setNama(numpang2);
											}
											break;
										case 2:
											{
												cout << "Masukkan Tanggal Lahir yang benar (dd month yyyy):";
												cin >> d >> m >> y;

												recMhs[editMhs].setTglLahir(d,m,y);
											}
											break;
										case 3:
											{
												cout << "Masukkan NRP yang benar :";
												cin >> numpang2;

												recMhs[editMhs].setNRP(numpang2);
											}
											break;
										case 4:
											{
												cout << "Masukkan Departemen yang benar :";
												cin.ignore();
												getline(cin,numpang2);

												recMhs[editMhs].setDepartemen(numpang2);
											}
											break;
										case 5:
											{
												cout << "Masukkan Tahun Masuk yang benar :";
												cin >> numpang;

												recMhs[editMhs].setTahunmasuk(numpang);
											}
											break;
										case 6:
											{
												cout << "Masukkan semester terupdate :";
												cin >> numpang;
												recMhs[editMhs].setSemester(numpang);
											}
											break;
										case 7:
											{
												cout << "Masukkan SKS lulus terupdate :";
												cin >> numpang;

												recMhs[editMhs].setSKSLulus(numpang);
											}
											break;
										case 8:
											{
												cout << "Masukkan Nama yang benar :";
												cin.ignore();
												getline(cin,nama);

												recMhs[editMhs].setNama(nama);
											
										
												cout << "Masukkan Tanggal Lahir yang benar (dd month yyyy):";
												cin >> d >> m >> y;

												recMhs[editMhs].setTglLahir(d,m,y);
											
												cout << "Masukkan NRP yang benar :";
												cin >> NRP;

												recMhs[editMhs].setNRP(NRP);
											
										
												cout << "Masukkan Departemen yang benar :";
												cin.ignore();
												getline(cin,Departemen);

												recMhs[editMhs].setDepartemen(Departemen);
											
												cout << "Masukkan Tahun Masuk yang benar :";
												cin >> tahunMasuk;

												recMhs[editMhs].setTahunmasuk(tahunMasuk);
											
												cout << "Masukkan semester terupdate :";
												cin >> smstrUpdt;
												recMhs[editMhs].setSemester(smstrUpdt);
											
												cout << "Masukkan SKS lulus terupdate :";
												cin >> sksUpdt;

												recMhs[editMhs].setSKSLulus(sksUpdt);
											}
											break;
										}
											cout << "Apakah masih ingin mengedit? [y/n]: ";
											cin >> nanya;

										if(nanya == 'y')
										{
											goto loop;

										}else 
										{
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

								if((unsigned int)editMhs <= recDosen.size())
								{	
									ulang:
									
									cout << "Pilih data yang hendak di edit: ";
									cout << "	1. Nama";
									cout << "	2. Tanggal Lahir";
									cout << "	3. NPP";
									cout << "	4. Departemen";
									cout << "	5. Pendidikan Terakhir";
									cout << "	6. Semua data";
									
									cin >> editMhs1;
										switch (editMhs1)
										{
										case 1:
											{
												cout << "Masukkan Nama yang benar :";
												cin.ignore();
												getline(cin,numpang2);

												recDosen[editMhs].setNama(numpang2);
											}
											break;
										case 2:
											{
												cout << "Masukkan Tanggal Lahir yang benar (dd month yyyy):";
												cin >> d >> m >> y;

												recDosen[editMhs].setTglLahir(d,m,y);
											}
											break;
										case 3:
											{
												cout << "Masukkan NPP yang benar :";
												cin >> numpang2;

												recDosen[editMhs].setNPP(numpang2);
											}
											break;
										case 4:
											{
												cout << "Masukkan Departemen yang benar :";
												cin.ignore();
												getline(cin,numpang2);

												recDosen[editMhs].setDepartemen(numpang2);
											}
											break;
										case 5:
											{
												cout << "Masukkan Pendidikan terakhir :";
												cin.ignore();
												getline(cin,numpang2);

												recDosen[editMhs].setPendidikan(numpang2);
											}
											break;
										case 6:
											{
												cout << "Masukkan Nama yang benar :";
												cin >> nama;

												recDosen[editMhs].setNama(nama);
											
												cout << "Masukkan Tanggal Lahir yang benar (dd month yyyy):";
												cin >> d >> m >> y;

												recDosen[editMhs].setTglLahir(d,m,y);
											
												cout << "Masukkan NPP yang benar :";
												cin >> NRP;

												recDosen[editMhs].setNPP(NRP);
											
												cout << "Masukkan Departemen yang benar :";
												cin.ignore();
												getline(cin,Departemen);

												recDosen[editMhs].setDepartemen(Departemen);
											
												cout << "Masukkan Pendidikan terakhir :";
												cin.ignore();
												getline(cin,pdkUpdt);

												recDosen[editMhs].setPendidikan(pdkUpdt);
											}
											break;
										}
											cout << "Apakah masih ingin mengedit? [y/n]: ";
											cin >> nanya;
										if(nanya == 'y')
										{

											goto ulang;

										}else 
										{
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

								if((unsigned int)editMhs <= recDosen.size())
								{
									
									repeat:

									cout << "Pilih data yang hendak di edit: ";
									cout << "	1. Nama";
									cout << "	2. Tanggal Lahir";
									cout << "	3. NPP";
									cout << "	4. Unit";
									cout << "	5. Semua data";
									
									cin >> editMhs1;
										switch (editMhs1)
										{
										case 1:
											{
												cout << "Masukkan Nama yang benar :";
												cin.ignore();
												getline(cin,numpang2);

												recTendik[editMhs].setNama(numpang2);
											}
											break;
										case 2:
											{
												cout << "Masukkan Tanggal Lahir yang benar (dd month yyyy):";
												cin >> d >> m >> y;

												recTendik[editMhs].setTglLahir(d,m,y);
											}
											break;
										case 3:
											{
												cout << "Masukkan NPP yang benar :";
												cin >> numpang2;

												recTendik[editMhs].setNPP(numpang2);
											}
											break;
										case 4:
											{
												cout << "Masukkan Unit yang benar :";
												cin.ignore();
												getline(cin,numpang2);

												recTendik[editMhs].setUnit(numpang2);
											}
											break;
										
										case 5:
											{
												cout << "Masukkan Nama yang benar :";
												cin.ignore();
												getline(cin,nama);

												recTendik[editMhs].setNama(nama);
											
												cout << "Masukkan Tanggal Lahir yang benar (dd month yyyy):";
												cin >> d >> m >> y;

												recTendik[editMhs].setTglLahir(d,m,y);
											
												cout << "Masukkan NPP yang benar :";
												cin >> NRP;

												recTendik[editMhs].setNPP(NRP);
											
												cout << "Masukkan Unit yang benar :";
												cin >> Departemen;

												recTendik[editMhs].setUnit(Departemen);
											}
											break;
										}
											cout << "Apakah masih ingin mengedit? [y/n]: ";
											cin >> nanya;
										if(nanya == 'y')
										{

											goto repeat;

										}else 
										{
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
			
			}
			break;
			
		}
	}
		
	return 0;
}



