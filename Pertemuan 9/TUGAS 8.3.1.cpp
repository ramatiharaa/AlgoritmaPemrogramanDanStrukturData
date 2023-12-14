#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

string harga[3][3] = {{"D", "Dada", "2500"}, {"P", "Paha", "2000"}, {"S", "Sayap", "1500"}};

string getHargaSatuan(string kode) {
	int i;
	
	for(i = 0; i < 3; i++) {
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
	cout << "Kode\tJenis\tHarga" << endl;
	cout << "------------------------------" << endl;
	
	for(i = 0; i < 3; i++) {
		for(j = 0; j < 3; j++) {
			cout << "  ";
			if(j == 2) {
				cout << "Rp. ";
			}
			cout << harga[i][j] << "\t";
		}
	//	cout << "  " << harga[i][0] << "\t" << harga[i][1] << "\t" << "Rp. " << harga[i][2];
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
			cout << "Banyak Potong: "; cin >> keranjang[i][1];
			keranjang[i][2] = getHargaSatuan(keranjang[i][0]);
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
			cout << i + 1 << "\t" << keranjang[i][0] << "\t\t" << keranjang[i][2] << "\t\t" << keranjang[i][1] << "\t\tRp. " <<  keranjang[i][3];
		cout << endl;
	}
	
	cout << "-----------------------------------------------------------------------" << endl;
	cout << "\t\t\t\t\tJumlah Bayar\tRp. " << jumlahBayar << endl;
	cout << "\t\t\t\t\tPajak 10%\tRp. " << 10 * jumlahBayar / 100 << endl;
	cout << "\t\t\t\t\tTotal Bayar\tRp. " << jumlahBayar - (10 * jumlahBayar / 100);
	
	return 0;
	
}
