#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

void pembatas(int no) {
	if(no == 1) {
		cout << "=============== NO " << no << " ===============" << endl;
	}
	else {
		cout << endl << endl << "=============== NO " << no << " ===============" << endl;
	}
}

int main() {
	//NO 1
	int a, b;
	char lagi;
	
	atas:
		system("cls");
		pembatas(1);
		cout << "Masukkan bilangan = "; cin >> a;
		b = a % 2;
		printf("Nilai %d %% 2 adalah = %d", a, b);
		pilihan:
			printf("\n\nIngin hitung lagi [Y/T] : ");
			lagi = getche();
			
			if(lagi == 'Y' || lagi =='y') {
				goto atas;
			}
			else if(lagi == 'T' || lagi == 't') {
				printf("\nProgram selesai.");
			}
			else {
				printf("\nMasukkan sesuai petunjuk");
				goto pilihan;
			}
			
	//NO 2
	pembatas(2);
	int countertoTenGanjil = 1, counterBilanganGanjil = 1, totalJumlahGanjil = 0;
	
	do {
		//Jika Bilangan Ganjil
		if(counterBilanganGanjil % 2 != 0) {
			cout << counterBilanganGanjil;
			countertoTenGanjil++;
			totalJumlahGanjil += counterBilanganGanjil;
			counterBilanganGanjil++;
			if(countertoTenGanjil <= 10) {
				cout << " + ";
			}
		}
		else {
			counterBilanganGanjil++;
		}
	}
	while(countertoTenGanjil <= 10);
	cout << " = " << totalJumlahGanjil;
	
	//NO 3
	pembatas(3);
	int countertoTenGenap = 1, counterBilanganGenap = 1, totalJumlahGenap = 0;
	
	do {
		//Jika Bilangan Genap
		if(counterBilanganGenap % 2 == 0) {
			cout << counterBilanganGenap;
			countertoTenGenap++;
			totalJumlahGenap += counterBilanganGenap;
			counterBilanganGenap++;
			if(countertoTenGenap <= 10) {
				cout << " + ";
			}
		}
		else {
			counterBilanganGenap++;
		}
	}
	while(countertoTenGenap <= 10);
	cout << " = " << totalJumlahGenap;

	//NO 4
	pembatas(4);
	int c = 3, d = 2, e = 1, bil;
	
	/* karena dibuat dalam 1 file, function untuk clear console syntax dibawah ini di komen karena akan menghapus output nomor sebelumnya */
	//system("cls");
	printf("Bil-A   : Bil-B : Bil-C\n");
	printf("-----------------------");
	for(bil = 1; bil <= 10; ++bil) {
		c+=d; d+=e; e+=2;
		printf("\n%d\t:%d\t:%d", c, d, e);
		if(e == 13) {
			break;
		}
		getche();
	}
	
	return 0;
	
}
