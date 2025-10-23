//4.4. Foydalanuvchi yoshiga qarab toifa aniqlang:– < 7 “Bolalar”, 7–18 “O‘quvchi”, >18 “Katta”.
#include <iostream>
using namespace std;

int main() {
    int yosh;
    cout << "Yoshingizni kiriting: ";
    cin >> yosh;

    if (yosh < 7) {
        cout << "Bolalar" << endl;
    }
    else {
        if (yosh <= 18) {
            cout << "O'quvchi" << endl;
        }
        else {
            cout << "Katta" << endl;
        }
    }
    return 0;
}