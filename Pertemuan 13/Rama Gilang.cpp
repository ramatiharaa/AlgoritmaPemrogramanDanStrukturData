#include <iostream>

using namespace std;

int top = 0;
string *keranjang;

void showBarang() {
	string item[10] = {"[1] Kopi", "[2] Susu", "[3] Kentang", "[4] Es Krim", "[5] Teh Manis", "[6] Sosis", "[7] Bakso", "[8] Anggur", "[9] Keripik", "[10] Sambal"};
	
	for(int i = 0; i <= 10; i++) {
		cout << item[i];
		if(i == 4) {
			cout << endl;
		}
		else {
			cout << " ";
		};
	}
}

bool isEmpty() {
	if(top == 0) {
		return true;
	}
	else {
		return false;
	}
}

bool isFull() {
	if(top - 1 == sizeof(keranjang) / sizeof(int)) {
		return true;
	}
	else {
		return false;
	}
}

void showKeranjang() {
	if(!isEmpty()) {
		for(int i = 0; i < top; i++) {
			cout << keranjang[i] << ",";
			if(i == 4) {
				cout << endl;
			}
			else {
				cout << " ";
			};
		}
	}
	else {
		cout << "Keranjang anda masih kosong!";
	}
}

void push() {
	int input;
	
	if(isFull()) {
		cout << "\nKeranjang Penuh!!!";
	}
	else {
		cout << "\n";
		showBarang();
		cout << "\nInput Pilihan: "; cin >> input;
		
		if(input == 1) {
			keranjang[top] = "Kopi";
		}
		else if(input == 2) {
			keranjang[top] = "Susu";
		}
		else if(input == 3) {
			keranjang[top] = "Kentang";
		}
		else if(input == 4) {
			keranjang[top] = "Es Krim";
		}
		else if(input == 5) {
			keranjang[top] = "Teh Manis";
		}
		else if(input == 6) {
			keranjang[top] = "Sosis";
		}
		else if(input == 7) {
			keranjang[top] = "Bakso";
		}
		else if(input == 8) {
			keranjang[top] = "Anggur";
		}
		else if(input == 9) {
			keranjang[top] = "Keripik";
		}
		else if(input == 10) {
			keranjang[top] = "Sambal";
		}
		top++;
	}
}

void pop() {
	if(isEmpty()) {
		cout << "Keranjang anda masih kosong!";
	}
	else {
		cout << keranjang[top];
		top--;
	}
}

int main() {
    int input, length;

	cout << "=================================\nSELAMAT DATANG DI MINIMARKET KAMI\n=================================\n\n";
	cout << "Silahkan pilih keranjang sesuai kebutuhan anda\n[1] Besar (Maks 8 Item)\n[2] Sedang (Maks 5 Item)\n[3] Kecil (Maks 3 Item)\nInput Pilihan: "; cin >> input;
	if(input == 1) {
		length = 8;
	}
	else if(input == 2) {
		length = 5;
	}
	else {
		length = 3;
	}
    
    keranjang = new string[length];
    
    menu:
	    cout << endl;
	    showKeranjang();
	    cout << "\n\n[1] Masukkan item kedalam keranjang (PUSH)\n[2] Hapus item terakhir yang masuk kedalam keranjang (POP)\nInput Pilihan: "; cin >> input;
    
    if(input == 1) {
    	push();
    	goto menu;
	}
	else if(input == 2) {
		pop();
		goto menu;
	}
    
}
