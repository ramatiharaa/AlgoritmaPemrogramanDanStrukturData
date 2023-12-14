#include <iostream>
#include <stack>

using namespace std;

int postfix(string input) {
	stack <int> stackPostfix;
    for (int i = 0; i < input.length(); i++) {
        if (isdigit(input[i])) {
            stackPostfix.push(input[i] - '0');
        } else {
        	int op1 = stackPostfix.top();
            stackPostfix.pop();
            int op2 = stackPostfix.top();
            stackPostfix.pop();
			stackPostfix.push(op2 + op1);
        }
    }
    return stackPostfix.top();
}

int main() {
    string input;
    
    cout << "Masukkan Postfix : "; cin >> input;
    cout << "Hasil dari Postfix = " << postfix(input) << endl;
    return 0;
}
