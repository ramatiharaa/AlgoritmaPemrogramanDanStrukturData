#include <iostream>

using namespace std;

int main () {
    int x, y, Tambah, Kurang, Kali, bagi;
    cout << "Masukan bilangan kesatu: ";
    cin >> x;
    cout << "Masukan bilangan kedua: ";
    cin >> y;
    Tambah = x+y;
    Kurang = x-y;
    Kali = x*y;
    bagi = x/y;
    cout << "Jadi hasil penjumlahannya adalah: " << Tambah << endl;
    cout << "Jadi hasil pengurangannya adalah: " << Kurang << endl;
    cout << "Jadi hasil parkaliannya adalah: " << Kali << endl;
    cout << "Jadi hasil pembagiannya adalah: " << bagi << endl;

    return 0;
}