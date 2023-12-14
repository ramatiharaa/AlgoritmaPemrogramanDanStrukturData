#include <iostream>

using namespace std;

void a(int *y, int *z) {
	if(*y == 0) {
		cout << *z << "  " << *z + 1 << " " << *z << " " << *z + 1;
	}
	else {
		cout << *z << "  " << *z + 1 << " " << *z << " " << *z + 1;
	}
}

int main() {
	int x, sisaBagi, *pointerSisaBagi, *pointerInputan;
	cout << "Masukkan bilangan: "; cin >> x;
	pointerInputan = &x;
	sisaBagi = x % 2;
	pointerSisaBagi = &sisaBagi;
	a(pointerSisaBagi, pointerInputan);
	return 0;
}
