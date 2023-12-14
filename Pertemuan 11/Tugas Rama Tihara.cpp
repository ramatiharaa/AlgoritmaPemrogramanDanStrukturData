#include <iostream>

using namespace std;

int tambahkanArray(const int* arr, int ukuran) {
	int hasil = 0;
	for(int i = 0; i < ukuran; i++) {
		hasil += *arr;
		arr++;
	}
	return hasil;
}

int main() {
	int ukuranArray;
	
	cout << "Masukkan ukuran array: "; cin >> ukuranArray;
	
	int arrayAngka[ukuranArray];
	
	std::cout << "Masukkan elemen array: " << std::endl;
	
	for(int i = 0; i < ukuranArray; ++i) {
		cout << "Elemen ke-" << i + 1 << ": "; std::cin >> arrayAngka[i];
	}
	
	int total = tambahkanArray(arrayAngka, ukuranArray);
	std::cout << "Hasil penjumlahan array: " << total << std::endl;
	
	return 0;
	
}
