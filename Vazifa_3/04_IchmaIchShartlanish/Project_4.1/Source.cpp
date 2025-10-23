//4.1. Uchta son ichida eng kattasini toping.
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Uchta butun son kiriting: ";
    cin >> a >> b >> c;

    if (a >= b) {
        if (a >= c) {
            cout << "Eng katta: " << a << endl;
        }
        else {
            cout << "Eng katta: " << c << endl;
        }
    }
    else {
        if (b >= c) {
            cout << "Eng katta: " << b << endl;
        }
        else {
            cout << "Eng katta: " << c << endl;
        }
    }
    return 0;
}