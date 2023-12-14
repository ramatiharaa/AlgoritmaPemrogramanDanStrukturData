#include <iostream>

using namespace std;

struct siswa {
		int no_induk;
		string nama;
		float nilai;
	};
	
int main() {
	siswa Jery = {1, "Jery Januar", 85.5};
	siswa Tono = {2, "Tono Laksono", 89.9};
	
	cout << Jery.nama << " mendaptkan nilai " << Jery.nilai << endl;
	cout << Tono.nama << " mendaptkan nilai " << Tono.nilai << endl;
	
	return 0;
}
