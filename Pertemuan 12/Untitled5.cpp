#include <iostream>

using namespace std;

typedef struct orang {
	char nama[30];
	short umur;
} org;
	
int main() {
	org saya[5];
	int i, x;
	for(i = 0; i <= 2; i++) {
		cout << "Nama : "; cin >> saya[i].nama;
		cout << "Umur : "; cin >> saya[i].umur;
		cout << endl;
	}
	
	for(x = 0; x <= 2; x++) {
		cout << "Data ke [" << x << "] " << "bernama " << saya[x].nama << " dan berumur " << saya[x].umur << " tahun";
		cout << endl;
	}
	
	return 0;
}
