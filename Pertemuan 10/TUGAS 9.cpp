#include <iostream>

using namespace std;

double persegi(double panjang, double lebar) {
	return panjang * lebar;
}

double lingkaran(double jariJari) {
	return 3.14 * jariJari * jariJari;
}

double tabung(double jariJari, double tinggi) {
	return 2 * 3.14 * jariJari * (jariJari + tinggi);
}

void judul(string nama) {
	cout << "===================================" << endl;
	cout << nama << endl;
	cout << "===================================" << endl;
}

int main() {
	double panjang, lebar, jariJari, tinggi;
	
	for(int i = 1; i <= 2; i++) {
		judul("MENGHITUNG LUAS PERSEGI");
		cout << "Masukkan panjang: "; cin >> panjang;
		cout << "Masukkan lebar: "; cin >> lebar;
		
		cout << "Luas persegi adalah: " << persegi(panjang, lebar);
		cout << endl << endl;
	}
	
	for(int i = 1; i <= 2; i++) {
		judul("MENGHITUNG LUAS LINGKARAN");
		cout << "Masukkan jari - jari: "; cin >> jariJari;
		
		cout << "Luas lingkaran adalah: " << lingkaran(jariJari);
		cout << endl << endl;
	}
	
	for(int i = 1; i <= 2; i++) {
		judul("MENGHITUNG LUAS PERMUKAAN TABUNG");
		cout << "Masukkan jari - jari: "; cin >> jariJari;
		cout << "Masukkan tinggi: "; cin >> tinggi;
		
		cout << "Luas permukaan tabung adalah: " << tabung(jariJari, tinggi);
		cout << endl << endl;
	}
	
	return 0;
	
}
