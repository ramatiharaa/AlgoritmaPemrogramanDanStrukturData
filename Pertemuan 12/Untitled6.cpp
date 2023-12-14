#include <iostream>
using namespace std;

struct Sum {
	int add(int num1, int num2) {
		return num1 + num2;
	}
	int add(int num1, int num2, int num3) {
		return num1 + num2 + num3;
	}
};


int main() {
	Sum calculator;
	
	cout << "Hasil 1 = " << calculator.add(5, 7) << endl;
	cout << "Hasil 2 = " << calculator.add(9, 2, 5) << endl;
	
	return 0;
}
