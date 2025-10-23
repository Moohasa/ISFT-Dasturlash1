//8.7. Foydalanuvchidan ism, yosh, baho kiritilib, ma’lumotni jadval tarzida chiqarish.
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    string ism;
    int yosh;
    double baho;

    cout << "Ism: "; cin >> ism;
    cout << "Yosh: "; cin >> yosh;
    cout << "Baho (0-100): "; cin >> baho;

    cout << "\n--- Talaba ma'lumotlari ---" << endl;
    cout << setw(10) << left << "Ism"
        << setw(6) << "Yosh"
        << setw(8) << "Baho" << endl;
    cout << setw(10) << left << ism
        << setw(6) << yosh
        << fixed << setprecision(1) << baho << endl;

    return 0;
}
