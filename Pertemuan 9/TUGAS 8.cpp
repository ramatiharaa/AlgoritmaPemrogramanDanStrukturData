#include <iostream>

using namespace std;

int main() {
	int i, j, k;
	int jumlahRow;
	int jumlahColumn;
	
	inputRowColumn:
		cout << "Masukkan Jumlah Row Matriks: "; cin >> jumlahRow;
		cout << "Masukkan Jumlah Column Matriks: "; cin >> jumlahColumn;
	
	if(jumlahRow != jumlahColumn) {
		cout << "Mohon masukkan jumlah row dan jumlah column yang sama"; cout << "\n\n";
		goto inputRowColumn;
	}
	
	int matriks1[jumlahRow][jumlahColumn];
	int matriks2[jumlahRow][jumlahColumn];
	
	//Input Matriks 1
	cout << "\n";
	cout << "Input Matriks 1" << endl;
	for(i = 0; i < jumlahRow; i++) {
		for(j = 0; j < jumlahColumn; j++) {
			cout << "Masukkan elemen row ke " << i + 1 << " column ke " << j + 1 << ": "; cin >> matriks1[i][j];
		}
		cout << endl;
	}
	
	//Input Matriks 2
	cout << "\n";
	cout << "Input Matriks 2" << endl;
	for(i = 0; i < jumlahRow; i++) {
		for(j = 0; j < jumlahColumn; j++) {
			cout << "Masukkan elemen row ke " << i + 1 << " column ke " << j + 1 << ": "; cin >> matriks2[i][j];
		}
		cout << endl;
	}
	
	//Tampilkan Matriks 1
	cout << "Matriks 1" << endl;
	cout << "===============" << endl;
	for(i = 0; i < jumlahRow; i++) {
		for(j = 0; j < jumlahColumn; j++) {
			cout << matriks1[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	//Tampilkan Matriks 2
	cout << "Matriks 2" << endl;
	cout << "===============" << endl;
	for(i = 0; i < jumlahRow; i++) {
		for(j = 0; j < jumlahColumn; j++) {
			cout << matriks2[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	
	//Tampilkan Pertambahan
	cout << "Hasil dari pertambahan matriks diatas" << endl;
	cout << "=============================================" << endl;
	for(i = 0; i < jumlahRow; i++) {
		for(j =0; j < jumlahColumn; j++) {
			cout << matriks1[i][j] + matriks2[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl;
	
	//Tampilkan Pengurangan
	cout << "Hasil dari pengurangan matriks diatas" << endl;
	cout << "=============================================" << endl;
	for(i = 0; i < jumlahRow; i++) {
		for(j =0; j < jumlahColumn; j++) {
			cout << matriks1[i][j] - matriks2[i][j] << " ";
		}
		cout << endl;
	}
	
	cout << endl;
	
	//Tampilkan Perkalian
	int hasil[jumlahRow][jumlahColumn];
	cout << "Hasil dari perkalian matriks diatas" << endl;
	cout << "=============================================" << endl;
	for(i = 0; i < jumlahRow; i++) {
        for (j = 0; j < jumlahColumn; j++) {
            hasil[i][j] = 0;
            for(k = 0; k < jumlahRow; k++) {
                hasil[i][j] += matriks1[i][k] * matriks2[k][j];
            }
            cout << hasil[i][j] << " ";
        }
  		cout << endl;
    }
    
    cout << endl;
	
	return 0;
	
}
