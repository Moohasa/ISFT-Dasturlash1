//5.5. Radius berilgan bo‘lsa, doiraning yuzini va uzunligini toping.
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    cout << "Radiusni kiriting: ";
    cin >> radius;

    if (radius < 0) {
        cout << "Radius manfiy bo'lishi mumkin emas!" << endl;//Mobodaga, adashib sondan oldin - bosilib ketsa
        return 1;
    }

    double yuza = M_PI * radius * radius;
    double uzunlik = 2 * M_PI * radius;

    cout << "Doira yuzi: " << yuza << endl;
    cout << "Aylana uzunligi: " << uzunlik << endl;

    return 0;
}