//7.1. Foydalanuvchidan x qiymatini kiritib, y=x3+2x2−4x+1y = x^3 + 2x^2 - 4x + 1y=x3+2x2−4x+1 ni hisoblang.

#include <iostream>
using namespace std;

int main() {
    double x;
    cout << "x ni kiriting: ";
    cin >> x;

    double y = x * x * x + 2 * x * x - 4 * x + 1;
    cout << "y = x^3 + 2x^2 - 4x + 1 = " << y << endl;

    return 0;
}