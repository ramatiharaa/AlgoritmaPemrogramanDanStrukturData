#include <iostream>
#define MAX 4

using namespace std;

struct TumpukanBuku {
	int top;
	int antrian[MAX];
}perpus;

void inisialisasi() {
	perpus.top = -1;
}

bool kondisiKosong() {
	return perpus.top == -1;
}

bool kondisiPenuh() {
	return perpus.top == MAX -1;
}

void inputData() {
	if(kondisiPenuh()) {
		cout << "\nAntrian penuh" << endl;
	} else {
		perpus.top++;
		cout << "\nMasukkan Antrian = "; cin >> perpus.antrian[perpus.top];
		cout << "Antiran " << perpus.antrian[perpus.top] << "Telah masuk ke timpukan buku" << endl;
	}
}

void hapusData() {
	if(kondisiKosong()) {
		cout << "antrian kosong";
	} else {
		cout << "antrian " << perpus.antrian[perpus.top] << " telah dihapus" << endl;
		perpus.top--;
	}
}

void tampilData() {
	if(kondisiKosong()) {
		cout << "Antrian Kosong";
	} else {
		cout << "Antrian: ";
		for(int i = perpus.top; i >= 0; i--) {
			cout << perpus.antrian[i] << ((i == 0) ? "" : ",");
		}
	}
}

int main() {
	int pilihan;
	inisialisasi();
	do {
		tampilData();
		cout << "\n1. Masukkan Data\n"
		<< "2. hapus Data\n"
		<< "3. Keluar \n"
		<< "Masukkan pilihan: ";
		cin >> pilihan;
		switch(pilihan) {
			case 1:
				inputData();
				break;
			case 2:
				hapusData();
				break;
			default:
				cout << "Pilihan tidak tersedia" << endl;
				break;
		}
	} while(pilihan != 3);
}
