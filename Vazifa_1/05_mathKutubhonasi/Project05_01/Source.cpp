//5.1.Foydalanuvchi tomonidan kiritilgan sonning kvadrat ildizini hisoblang(sqrt).
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double son;
    cout << "Sonni kiriting: ";
    cin >> son;

    if (son < 0) {
        cout << "Manfiy sonning kvadrat ildizi mavjud emas (haqiqiy sonlar sohasida)." << endl;//har ehtimolga qarshi-)
    }
    else {
        cout  << son << " = " << sqrt(son) << endl;
    }

    return 0;
}