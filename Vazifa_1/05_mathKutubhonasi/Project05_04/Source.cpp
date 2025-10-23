//5.4.Darajaga oshirish(pow) funksiyasini ishlatib aba ^ bab ni hisoblang.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    cout << "a ni kiriting: ";
    cin >> a;
    cout << "b ni kiriting: ";
    cin >> b;

    double natija = pow(a, b);
    cout << a << "^" << b << " = " << natija << endl;

    return 0;
}