//6.1. Arifmetik amallar menyusi (+, -, *, /).
#include <iostream>
using namespace std;

int main() {
    double a, b;
    char amal;
    cin >> a >> amal >> b;
    switch (amal) {
    case '+': cout << a + b << endl; break;
    case '-': cout << a - b << endl; break;
    case '*': cout << a * b << endl; break;
    case '/':
        if (b != 0) cout << a / b << endl;
        else cout << "Nolga bo'lish mumkin emas" << endl;
        break;
    default: cout << "Noto'g'ri amal" << endl;
    }
    return 0;
}