#include <iostream>

using namespace std;


//Function untuk NO 3
bool cekBilPrima(int angka) {
	int i;
	
	if(angka < 2) {
    	return false;
  	}
	else {
		for(i = 2; i <= angka / 2; i++) {
    		if(angka % i == 0) {
    			return false;
        		break;
      		}
    	}
    	return true;
  	}
}

int main() {
	
	//NO 1
	int i, j;
	
	cout << "==============1==============" << endl;
	for(i = 1; i <= 5; i++) {
		for(j = 1; j <= 6; j++) {
			cout << i << " ";
		}
		cout << endl;
	}
	cout << endl;
	cout << endl;
	
	//NO 2
	int k;
	
	cout << "==============2==============" << endl;
	cout << "Perulangan berurutan" << endl;
	for(k = 1; k <= 20; k++) {
		cout << k << endl;
	}
	cout << endl;
	cout << "Perulangan menurun" << endl;
	for(k = 20; k >= 1; k--) {
		cout << k << endl;
	
	}
	cout << endl;
	cout << "Bilangan ganjil 1 - 20" << endl;
	for(k = 1; k <= 20; k++) {
		if(k % 2 != 0) {
			cout << k << endl;
		}
	}
	cout << endl;
	cout << endl;
	cout << "Bilangan genap 1 - 20" << endl;
	for(k = 1; k <= 20; k++) {
		if(k % 2 == 0) {
			cout << k << endl;
		}
	}
	cout << endl;
	cout << endl;
	
	//NO 3
	int angka;
	int decision = 1;
	
	cout << "==============2==============" << endl;
	cout << "Cek bilangan prima" << endl;
	
	while(decision == 1) {
		cout << "Masukkan angka: "; cin >> angka;
		if (cekBilPrima(angka)) {
			cout << "Termasuk bilangan PRIMA";
	  	}
	  	else {
    		cout << "Bukan termasuk PRIMA";
 		}
 		cout << endl;
 		cout << "===================================================" << endl;
 		cout << "Apakah anda ingin cek bilangan prima kembali?" << endl;
		cout << "Ketik 1 jika ingin, jika tidak ketik sembarang: "; cin >> decision;
		cout << endl;
 	
	}
	
	cout << "Terima kasih telah menggunakan program ini";
	cout << endl;
	cout << endl;
	
	//NO 4
	int row, m, n;
	
	cout << "==============4==============" << endl;
	cout << "Enter the number of row: "; cin >> row;
	for(m = 1; m <= row; m++) {
		for(n = m; n <= row; n++) {
	    	cout << "* ";
		}
		for(n = 1; n <= (2 * m - 2); n++) {
			cout << "  ";
		}
		for(n = m; n <= row; n++) {
		     cout << "* ";
		}
		cout << endl;
	}
	for(m = 1; m <= row; m++) {
	    for(n = 1; n <= m; n++) {
	    	cout << "* ";
		}
		for(n = (2 * m - 2); n < (2 * row - 2); n++) {
			cout << "  ";
		}
		for(n = 1; n <= m; n++) {
		    cout << "* ";
		}
		cout << endl;
	}
	
	return 0;

}
