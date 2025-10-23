//6.3. Foydalanuvchidan x soni kiritiladi.
// y=3x2−2x+5
// y = 3x^2 - 2x + 5
// y=3x2−2x+5 ni hisoblang.

#include <iostream>
using namespace std;

int main() {
    double x;
    cout << "x ni kiriting: ";
    cin >> x;

    double y = 3 * x * x - 2 * x + 5;
    cout << "y = 3x^2 - 2x + 5 = " << y << endl;

    // double y = 3 * x * x - 2 * x + 5;
    //cout << "y = 3x^2 - 2x + 5 = " << y << endl;

    return 0;
}

