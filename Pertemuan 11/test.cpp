#include <iostream>
using namespace std;

int program1(int x, int y);

int main(){
    int x, y;
    
    cout << "MENGHITUNG PANGKAT DENGAN FUNGSI REKURSIF\n\n";
    cout << "Masukan Nilai X = ";
    cin >> x;
    cout << "Masukan Nilai Y = ";
    cin >> y;
    
    cout <<"\n\n"<<x<<" Dipangkatkan "<<y<<" = "<<program1(x, y);
}

int program1(int x, int y){
    cout << y << endl;
    if(y == 0){
         return 1;
    }else{
          return x * program1(x, y-1);
    }
}
