//3.5. Foydalanuvchidan 2 ta son kiritilib, kattasini ekranga chiqaring.
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Ikki butun son kiriting: ";
    cin >> a >> b;
    if (a > b) {
        cout << "Katta son: " << a << endl;
    }
    else {
        cout << "Katta son: " << b << endl;
    }
    return 0;
}