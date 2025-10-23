//8.5. Foydalanuvchidan 3 son kiritiladi, ular uchun formatlangan chiqish hosil qiling.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b, c;
    cout << "Uchta haqiqiy son kiriting: ";
    cin >> a >> b >> c;

    cout << fixed << setprecision(3);
    cout << "Son 1: " << setw(10) << a << endl;
    cout << "Son 2: " << setw(10) << b << endl;
    cout << "Son 3: " << setw(10) << c << endl;

    return 0;
}