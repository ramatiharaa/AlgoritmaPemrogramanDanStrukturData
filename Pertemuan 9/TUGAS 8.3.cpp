#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

//Data Table Harga
string harga[4][3] = {{"Kode", "Jenis", "Harga"}, {"D", "Dada", "2500"}, {"P", "Paha", "2000"}, {"S", "Sayap", "1500"}};

int rowHarga = sizeof harga / sizeof harga[0];
int columnHarga = sizeof(harga[0]) / sizeof(harga[0][0]);

string getHargaSatuan(string kode) {
	int i;
	
	for(i = 0; i < rowHarga; i++) {
		if(kode == harga[i][0]) {
			return harga[i][2];
			break;
		}
	}
}

int main() {
	int banyakJenis, i, j, jumlahBayar = 0;
	
	cout << "GEROBAK FRIED CHICKEN" << endl;
	cout << "---------------------" << endl;
	//Tampilkan Header
	for(i = 0; i < columnHarga; i++) {
		cout << harga[0][i] << "\t";
	}
	cout << endl;
	cout << "------------------------------" << endl;
	//Tampilkan Data
	for(i = 1; i < rowHarga; i++) {
		for(j = 0; j < columnHarga; j++) {
			if(j == 0) {
				cout << "  ";
			}
			else if(j == 2) {
				cout << "Rp. ";
			}
			cout << harga[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "------------------------------" << endl;
	
	cout << endl;
	
	cout << "Banyak Jenis: "; cin >> banyakJenis; cout << endl;
	
	string keranjang[banyakJenis][4];
	
	for(i = 0; i < banyakJenis; i++) {
		cout << "Jenis ke - " << i + 1 << endl;
			jenisPotong:
				cout << "Jenis Potong [D/P/S]: "; keranjang[i][0] = toupper(getche()); cout << endl;
			if(!(keranjang[i][0] == "D" || keranjang[i][0] == "P" || keranjang[i][0] == "S")) {
				cout << "Mohon masukkan jenis potong sesuai instruksi!" << endl;
				goto jenisPotong;
			}
			cout << "Banyak Potong: "; cin >> keranjang[i][2];
			keranjang[i][1] = getHargaSatuan(keranjang[i][0]);
			keranjang[i][3] = to_string(stoi(keranjang[i][2]) * stoi(keranjang[i][1]));
			jumlahBayar += stoi(keranjang[i][3]);
		cout << endl;
	}
	
	cout << "\t\t\tGEROBAK FRIED CHICKEN" << endl;
	cout << "-----------------------------------------------------------------------" << endl;
	cout << "No.\tJenis\t\tHarga\t\tBanyak\t\tJumlah" << endl;
	cout << "\tPotong\t\tSatuan\t\tBeli\t\tHarga" << endl;
	cout << "-----------------------------------------------------------------------" << endl;
	
	for(i = 0; i < banyakJenis; i++) {
		cout << i + 1 << "\t";
		for(j = 0; j < 4; j++) {
			if(j == 3) {
				cout << "Rp. ";
			}
			cout << keranjang[i][j] << "\t\t";
		}
		cout << endl;
	}
	
	cout << "-----------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t\tJumlah Bayar\tRp. " << jumlahBayar << endl;
	cout << "\t\t\t\t\tPajak 10%\tRp. " << 10 * jumlahBayar / 100 << endl;
	cout << "\t\t\t\t\tTotal Bayar\tRp. " << jumlahBayar + (10 * jumlahBayar / 100);
	
	return 0;
	
}
