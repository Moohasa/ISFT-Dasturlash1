//4.2. Uchta son ichida eng kichigini toping.
#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Uchta butun son kiriting: ";
    cin >> a >> b >> c;

    if (a <= b) {
        if (a <= c) {
            cout << "Eng kichik: " << a << endl;
        }
        else {
            cout << "Eng kichik: " << c << endl;
        }
    }
    else {
        if (b <= c) {
            cout << "Eng kichik: " << b << endl;
        }
        else {
            cout << "Eng kichik: " << c << endl;
        }
    }
    return 0;
}