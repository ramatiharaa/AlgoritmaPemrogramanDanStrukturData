#include <iostream>

using namespace std;

int main() {
	int x, bil = 0; //Declare variable
	
	cout << "Masukkan nilai pembatas akhir: "; //Tampilkan info untuk memasukan pembatas akhir
	cin >> x; // Fungsi untuk memasukkan inputan ke dalam variable x
	
	do { //Lakukan perintah
		if(bil >= x) //kondisi jika bilangan lebih dari inputan (variable x) akan masuk ke kondisi line dibawah
			break; //statement untuk stop perlangan
			cout << bil << " "; // Akan menampilkan bilangan dalam variable bil
	}
	while(bil += 4); //kondisi value di variable bil akan di tambah 4
	getchar(); //Akan membaca data yang bertipe char
}
