#include <iostream>

using namespace std;


float hitungRataRata(int nilaiPertandingan1, int nilaiPertandingan2, int nilaiPertandingan3) {
	float result;
	
	result = nilaiPertandingan1 + nilaiPertandingan2 + nilaiPertandingan3;
	result = result / 3;
	
	return result;
}

int main() {
	string namaSiswa, hadiah;
	int nilaiPertandingan1, nilaiPertandingan2, nilaiPertandingan3;
	float nilaiRataRata;
	
	//Pengkondisian if else
	cout << "Program Hitung Nilai Rata - Rata" << endl;
	cout << "Nama Siswa : "; getline(cin, namaSiswa);
	cout << "Nilai Pertandingan I : "; cin >> nilaiPertandingan1;
	cout << "Nilai Pertandingan II : "; cin >> nilaiPertandingan2;
	cout << "Nilai Pertandingan III : "; cin >> nilaiPertandingan3;
	nilaiRataRata = hitungRataRata(nilaiPertandingan1, nilaiPertandingan2, nilaiPertandingan3);
	if(nilaiRataRata >= 85) {
		hadiah = "Komputer Core i5";
	}
	else {
		if(nilaiRataRata >= 70) {
			hadiah = "Uang sebesar Rp.2.500,000";
		}
		else if(nilaiRataRata < 70) {
			hadiah = "Mendapat hadiah hiburan";
		}
	}
	cout << "Siswa yang bernama " << namaSiswa << endl;
	cout << "memperoleh nilai rata - rata " << nilaiRataRata << " dari hasil perlombaan yang diikutinya" << endl;
	cout << "Hadiah yang didapat adalah " <<  hadiah << endl;
	cout << "Pengkondisian if else" << endl;
	cout << "========================================================" << endl;
	cout << endl;
	
	//Pengkondisian nested if
	cout << "Program Hitung Nilai Rata - Rata" << endl;
	cout << "Nama Siswa : "; cin.ignore(); getline(cin, namaSiswa);
	cout << "Nilai Pertandingan I : "; cin >> nilaiPertandingan1;
	cout << "Nilai Pertandingan II : "; cin >> nilaiPertandingan2;
	cout << "Nilai Pertandingan III : "; cin >> nilaiPertandingan3;
	nilaiRataRata = hitungRataRata(nilaiPertandingan1, nilaiPertandingan2, nilaiPertandingan3);
	if(nilaiRataRata >= 85) {
		hadiah = "Komputer Core i5";
	}
	else {
		if(nilaiRataRata >= 70) {
			hadiah = "Uang sebesar Rp.2.500,000";
		}
		else {
			if(nilaiRataRata < 70) {
				hadiah = "Mendapat hadiah hiburan";
			}
		}
	}
	cout << "Siswa yang bernama " << namaSiswa << endl;
	cout << "memperoleh nilai rata - rata " << nilaiRataRata << " dari hasil perlombaan yang diikutinya" << endl;
	cout << "Hadiah yang didapat adalah " <<  hadiah << endl;
	cout << "Pengkondisian nested if" << endl;
	cout << "========================================================" << endl;
	cout << endl;
	
	//Pengkondisian if else majemuk
	cout << "Program Hitung Nilai Rata - Rata" << endl;
	cout << "Nama Siswa : "; cin.ignore(); getline(cin, namaSiswa);
	cout << "Nilai Pertandingan I : "; cin >> nilaiPertandingan1;
	cout << "Nilai Pertandingan II : "; cin >> nilaiPertandingan2;
	cout << "Nilai Pertandingan III : "; cin >> nilaiPertandingan3;
	nilaiRataRata = hitungRataRata(nilaiPertandingan1, nilaiPertandingan2, nilaiPertandingan3);
	if(nilaiRataRata >= 85) {
		hadiah = "Komputer Core i5";
	}
	else if(nilaiRataRata >= 70) {
		hadiah = "Uang sebesar Rp.2.500,000";
	}
	else if(nilaiRataRata < 70) {
		hadiah = "Mendapat hadiah hiburan";
	}
	cout << "Siswa yang bernama " << namaSiswa << endl;
	cout << "memperoleh nilai rata - rata " << nilaiRataRata << " dari hasil perlombaan yang diikutinya" << endl;
	cout << "Hadiah yang didapat adalah " <<  hadiah << endl;
	cout << "Pengkondisian if else majemuk" << endl;
	cout << "========================================================" << endl;
	cout << endl;
	
	//Pengkondisian switch case
	cout << "Program Hitung Nilai Rata - Rata" << endl;
	cout << "Nama Siswa : "; cin.ignore(); getline(cin, namaSiswa);
	cout << "Nilai Pertandingan I : "; cin >> nilaiPertandingan1;
	cout << "Nilai Pertandingan II : "; cin >> nilaiPertandingan2;
	cout << "Nilai Pertandingan III : "; cin >> nilaiPertandingan3;
	nilaiRataRata = hitungRataRata(nilaiPertandingan1, nilaiPertandingan2, nilaiPertandingan3);
	switch(nilaiRataRata >= 85) {
		case 1:
			hadiah = "Komputer Core i5";
			break;
	}
	switch(nilaiRataRata >= 70) {
		case 1:
			hadiah = "Uang sebesar Rp.2.500,000";
			break;
	}
	switch(nilaiRataRata < 70) {
		case 1:
			hadiah = "Mendapat hadiah hiburan";
			break;
	}
	cout << "Siswa yang bernama " << namaSiswa << endl;
	cout << "memperoleh nilai rata - rata " << nilaiRataRata << " dari hasil perlombaan yang diikutinya" << endl;
	cout << "Hadiah yang didapat adalah " <<  hadiah << endl;
	cout << "Pengkondisian switch case" << endl;
	cout << "========================================================" << endl;
	cout << endl;
	
	return 0;
}
