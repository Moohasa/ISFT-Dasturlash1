//6.7. Foydalanuvchi 1 bosganda Celsiy→Farengeyt, 2 bosganda aksincha konvertatsiya.
#include <iostream>
using namespace std;

int main() {
    int tanlov;
    double harorat;
    cout << "1 Celsiy -> Farengeyt\n2 Farengeyt -> Celsiy\nTanlov va haroratni kiriting: ";
    cin >> tanlov >> harorat;
    switch (tanlov) {
    case 1: cout << harorat * 9.0 / 5.0 + 32 << " F" << endl; break;
    case 2: cout << (harorat - 32) * 5.0 / 9.0 << " C" << endl; break;
    default: cout << "Noto'g'ri tanlov" << endl;
    }
    return 0;
}