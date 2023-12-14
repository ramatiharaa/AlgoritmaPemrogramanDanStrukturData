#include <iostream>

using namespace std;

struct Mahasiwa {
	string nama;
	int umur;
	float ipk;
};

float hitungRataRataIPK(Mahasiwa mahasiswa[], int jumlah) {
	float total = 0;
	for(int i = 0; i < jumlah; ++i) {
		total += mahasiswa[i].ipk;
	}
	
	return total / jumlah;
}
	
int main() {
	const int jumlahmahasiwa = 3;
	Mahasiwa DaftarMahasiswa[jumlahmahasiwa];
	
	for(int i = 0; i < jumlahmahasiwa; ++i) {
		cout << "Masukkan nama mahasiswa " << i + 1 << ": "; cin >> DaftarMahasiswa[i].nama;
		cout << "Masukkan umur mahasiswa " << i + 1 << ": "; cin >> DaftarMahasiswa[i].umur;
		cout << "Masukkan IPK mahasiswa " << i + 1 << ": "; cin >> DaftarMahasiswa[i].ipk;	
	}
	
	cout << "\nData Mahasiwa: \n";
	
	for(int i = 0; i < jumlahmahasiwa; i++) {
		cout << "Mahasiswa " << i + 1 << ": \n";
		
		cout << "  Nama: " << DaftarMahasiswa[i].nama << "\n";
		cout << "  Umur: " << DaftarMahasiswa[i].umur << "\n";
		cout << "  IPK: " << DaftarMahasiswa[i].ipk << "\n";
	}
	
	float rataRata = hitungRataRataIPK(DaftarMahasiswa, jumlahmahasiwa);
	cout << "\nRata - rata IPK: " << rataRata << "\n";
	
	
	return 0;
}
