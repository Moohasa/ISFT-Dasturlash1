//7.3.Aylananing radiusi kiritilganda uzunligi va yuzi topilsin.

#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double r;
    cout << "Radiusni kiriting: ";
    cin >> r;

    if (r <= 0) {
        cout << "Radius musbat bo'lishi kerak!" << endl;
        return 1;
    }

    double uzunlik = 2 * M_PI * r;
    double yuza = M_PI * r * r;

    cout << "Aylana uzunligi: " << uzunlik << endl;
    cout << "Doira yuzi: " << yuza << endl;

    return 0;
}