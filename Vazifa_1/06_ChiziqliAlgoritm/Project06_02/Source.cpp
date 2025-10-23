//6.2.Uchta sonning o‘rtacha geometrigini hisoblang.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Uchta sonni kiriting: ";
    cin >> a >> b >> c;

    double kupaytma = a * b * c;
        if (kupaytma < 0) {
            cout << "Manfiy sonlarning o'rtacha geometrigi haqiqiy son emas." << endl;
            return 1;
}

double urtacha_geo = pow(kupaytma, 1.0 / 3.0);//uchinchi darajali ildiz == sonning 1/3 darajasiga-)
    cout << "O'rtacha geometrik: " << urtacha_geo << endl;

return 0;
}