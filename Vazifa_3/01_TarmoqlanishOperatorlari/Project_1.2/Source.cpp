//1.2. Foydalanuvchining yoshi 18 dan katta bo‘lsa “Voyaga yetgan”, aks holda “Voyaga yetmagan” deb chiqaring.
#include <iostream>
using namespace std;

int main() {
    int yosh;
    cout << "Yoshingizni kiriting: ";
    cin >> yosh;
    if (yosh >= 18) {
        cout << "Voyaga yetgan" << endl;
    }
    else {
        cout << "Voyaga yetmagan" << endl;
    }
    return 0;
}