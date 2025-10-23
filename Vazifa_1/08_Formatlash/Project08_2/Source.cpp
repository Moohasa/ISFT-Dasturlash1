//8.2. Haqiqiy sonni butun qism va kasr qismini alohida ko‘rsatish.

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double son;
    cout << "Haqiqiy son kiriting: ";
    cin >> son;

    long butun = static_cast<long>(floor(son)); // manfiy sonlarda ham to'g'ri
    double kasr = son - butun;

    cout << "Butun qism: " << butun << endl;
    cout << "Kasr qism: " << fixed << setprecision(6) << kasr << endl;

    return 0;
}