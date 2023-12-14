#include <iostream>

using namespace std;

int pangkatRekursif(int angka, int pangkat) {
    if(pangkat == 1) {
    	return angka;
	}
    else {
    	return angka * pangkatRekursif(angka, (pangkat - 1));
	}
}


int main() {
    int x, y;
    cout << "MENGHITUNG PANGKAT DENGAN FUNGSI REKURSIF\n\n";
    cout << "Masukkan Nilai X = "; cin >> x;
    cout << "Masukkan Nilai Y = "; cin >> y;
    cout << "\n" << x << " Dipangkatkan " << y << " = " << pangkatRekursif(x, y);
    
    return 0;
}
