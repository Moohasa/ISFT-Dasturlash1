//6.5.Haftaning kun raqami bo‘yicha dars jadvalini chiqaruvchi menyu.
#include <iostream>
using namespace std;

int main() {
    int kun;
    cout << "Hafta kunini kiriting (1-7): ";
    cin >> kun;
    switch (kun) {
    case 1: cout << "O‘zbekistonning eng yangi tarixi, Xorijiy til 1, Dasturlash 1" << endl; break;
    case 2: cout << "Hisob (Calculus) 1, Fizika 1,Tarix, Akademik yozuv" << endl; break;
    case 3: cout << "Dasturlash, Hisob (Calculus) 1, Fizika 1 " << endl; break;
    
    case 4: cout << "Akademik yozuv" << endl; break;
    case 5: cout << "O‘zbekistonning eng yangi tarix, , Fizika 1" << endl; break;
    case 6: cout << "Xorijiy til 1, Hisob (Calculus) 1, Dasturlash 1" << endl; break;
    case 7: cout << "Yakshanba dam olish kuni" << endl; break;
    default: cout << "Noto'g'ri kun" << endl;
    }
    return 0;
}