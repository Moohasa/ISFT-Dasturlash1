//5.3. Haftaning kuniga qarab “Ish kuni” yoki “Dam olish kuni” deb chiqaring.
#include <iostream>
using namespace std;

int main() {
    int kun;
    cout << "1-7 oralig'ida hafta kunini kiriting: ";
    cin >> kun;

    switch (kun) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Ish kuni" << endl;
        break;
    case 6:
    case 7:
        cout << "Dam olish kuni" << endl;
        break;
    default:
        cout << "Noto'g'ri kun!" << endl;
    }
    return 0;
}