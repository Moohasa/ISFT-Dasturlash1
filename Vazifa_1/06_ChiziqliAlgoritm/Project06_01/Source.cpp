//6.1.Ikki sonning o‘rtacha arifmetigini topuvchi dastur yozing.

#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Ikki sonni kiriting: ";
    cin >> a >> b;

    double ortacha = (a + b) / 2.0;
    cout << "O'rtacha arifmetik: " << ortacha << endl;

    return 0;
}