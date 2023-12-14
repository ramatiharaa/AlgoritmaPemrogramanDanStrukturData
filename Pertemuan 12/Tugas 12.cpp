#include <iostream>

using namespace std;

struct mhs {
	char nama[20], nim[10], matkul[15];
	int sks;
};

mhs bayar[2];

int main() {
	int var[2], tetap[2];
	
	for(int i = 0; i < 2; i++) {
		cout << "\n\n-------------------------\n";
		cout << "\nNama mhs\t= "; cin >> bayar[i].nama;
		cout << "NIM\t\t= "; cin >> bayar[i].nim;
		cout << "Mata Kuliah\t= "; cin >> bayar[i].matkul;
		cout << "Jumlah sks\t= "; cin >> bayar[i].sks;
		
		if(bayar[i].sks == 0) {
			tetap[i] = 250000;
			var[i] = bayar[i].sks * 250000;
		}
		else if(bayar[i].sks == 2) {
			tetap[i] = 300000;
			var[i] = bayar[i].sks * 300000;
		}
	}
	
	cout << "\n\n----------------\n\nOutput\n\n----------------\n";
	
	for(int i = 0; i < 2; i++) {
		cout << "\n\n-------------------------\n";
		cout << "\nNama mhs\t= " << bayar[i].nama;
		cout << "\nNIM\t\t= " << bayar[i].nim;
		cout << "\nMata Kuliah\t= " << bayar[i].matkul;
		cout << "\nJumlah sks\t= " << bayar[i].sks;
		cout << "\nSPP tetap\t= " << tetap[i];
		cout << "\nSPP variabel\t= " << var[i];
	}
}
