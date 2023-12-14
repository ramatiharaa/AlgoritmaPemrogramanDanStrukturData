#include <iostream>

using namespace std;
	
int main() {
	struct dtmhs {
		char nim[9];
		char nama[15];
	};
	
	struct dtnil {
		float nil1;
		float nil2;
	};
	
	struct {
		struct dtmhs mhs;
		struct dtnil nil;
	} nilai;
	
	cout << "Masukkan NIM = "; cin >> nilai.mhs.nim;
	cout << "Masukkan Nama = "; cin >> nilai.mhs.nama;
	cout << "Masukkan Nilai UTS = "; cin >> nilai.nil.nil1;
	cout << "Masukkan Nilai UAS = "; cin >> nilai.nil.nil2;
	cout << endl;
	
	cout << "Masukkan NIM = "; cin >> nilai.mhs.nim; cout << endl;
	cout << "Masukkan Nama = "; cin >> nilai.mhs.nama; cout << endl;
	cout << "Masukkan Nilai UTS = "; cin >> nilai.nil.nil1; cout << endl;
	cout << "Masukkan Nilai UAS = "; cin >> nilai.nil.nil2; cout << endl;
	cout << endl;
	
	return 0;
}
