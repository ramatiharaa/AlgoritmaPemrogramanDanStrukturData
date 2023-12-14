#include <iostream>

using namespace std;

void nama(string *x) {
	cout << "Alamat nama adalah = " << x;
	cout << endl;
	cout << "Value nama adalah = " << *x;
}

int main() {
	string y;
	
	cout << "Masukkan Nama: "; getline(cin, y);
	nama(&y);
	
	return 0;
	
}
