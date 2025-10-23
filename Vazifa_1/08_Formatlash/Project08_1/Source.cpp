//8.1. Haqiqiy sonning qiymatini 2 xonagacha aniqlik bilan ekranga chiqarish.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double son = 123.456789;
    cout << "Son (2 xonagacha): " << fixed << setprecision(2) << son << endl;
    return 0;
}