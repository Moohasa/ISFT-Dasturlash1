//5.1. 1–7 oralig‘ida son kiritilganda haftaning kunini aniqlang.
#include <iostream>
using namespace std;

int main() {
    int kun;
    cout << "1-7 oralig'ida son kiriting: ";
    cin >> kun;

    switch (kun) {
    case 1: cout << "Dushanba" << endl; break;
    case 2: cout << "Seshanba" << endl; break;
    case 3: cout << "Chorshanba" << endl; break;
    case 4: cout << "Payshanba" << endl; break;
    case 5: cout << "Juma" << endl; break;
    case 6: cout << "Shanba" << endl; break;
    case 7: cout << "Yakshanba" << endl; break;
    default: cout << "Noto'g'ri son!" << endl;
    }
    return 0;
}