#include <iostream>

using namespace std;

const int size = 3;

struct stack {
	int top = 0;
	string keranjang[size];
}warkop;

bool isfull() {
	if(warkop.top == size) {
		return true;
	}
	else {
		return false;
	}
}

bool isEmpty() {
	if(warkop.top == 0){
		return true;
	}
	else {
		return false; 
	}
}

void viewKeranjang() {
	cout << "==================\nISI KERANJANG ANDA\n==================\n";
	if(isEmpty()) {
		cout << "kosong...\n";
	}
	for(int i = 0; i < warkop.top; i++) {
		cout << warkop.keranjang[i] << endl;
	}
	cout << "==================\n\n";
}

void push(){
	string input;
	
	if(isfull()) {
		cout << "\nKeranjang/Stack Penuh!!!\n";
	}
	else {
		cout << "\nMENU YANG TERSEDIA\n------------------\n";
		cout << "Kopi\n";
		cout << "Susu\n";
		cout << "Teh\n";
		cout << "Aqua\n";
		cout << "Matcha\n";
		cout << "------------------\n";
		cout << "Ketikan Nama Menu: "; cin >> input;
		cout << endl;
		warkop.keranjang[warkop.top] = input;
		warkop.top++;
	}
}

void pop() {
	if(isEmpty()) {
		cout << "\nKeranjang/Stack Kosong!!!\n";
	}
	else {
		cout << "\nMenu " << warkop.keranjang[warkop.top - 1];
		cout << " Dihapus/POP Dari Keranjang/Stack\n";
		warkop.top--;
	}
}


int main() {
	int opsi;
	
	cout << "=================================\nSELAMAT DATANG DI WARKOP KAMI";
	cout << "\n=================================\n\n";
	cout << "========================================================\n";
	cout << "ANDA MEMILIKI KERANJANG DENGAN MAKSIMAL MENAMPUNG " << size;
	cout << " MENU\n========================================================\n\n";
	
	menu:
		cout << "[1] Masukkan menu ke dalam keranjang (Push)\n";
		cout << "[2] Hapus menu terakhir yang ada di dalam keranjang (Pop)";
		cout << "\nInput Pilihan: "; cin >> opsi;
	
	if(opsi == 1) {
		push();
	}
	else if(opsi == 2) {
		pop();
	}
	viewKeranjang();
	goto menu;
}
