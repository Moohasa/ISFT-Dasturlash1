//6.5. To‘g‘ri to‘rtburchakning diagonali uzunligini toping.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    cout << "To'g'ri to'rtburchakning tomonlarini kiriting (a, b): ";
    cin >> a >> b;

 

    double diagonal = sqrt(a * a + b * b); //formual d == sqrt(a^2 + b^2)
    cout << "Diagonal uzunligi: " << diagonal << endl;

    return 0;
}