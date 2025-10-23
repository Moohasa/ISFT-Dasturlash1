//2.4. Foydalanuvchidan son kiritib, uning kubini hisoblang.
#include <iostream>
using namespace std;

int main() {
    double son;
    cout << "Sonni kiriting: ";
    cin >> son;

    cout << son << " ning kubi: " << son * son * son << endl;
    // Yoki:
    // pow(son, 3) 
    // agar <cmath> qo'shilgan bo'lsa

    return 0;
}