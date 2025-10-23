//6.7. Foydalanuvchidan ikkita son kiritiladi, ularning ko‘paytmasi 100 dan katta yoki kichikligini aniqlang.

#include <iostream>
using namespace std;

int main() {
    double a, b;
    cout << "Ikki sonni kiriting: ";
    cin >> a >> b;

    double kopaytma = a * b;

    cout << "Ko'paytma: " << kopaytma << endl;

    if (kopaytma > 100) {
        cout << "Ko'paytma 100 dan KATTA" << endl;
    }
    else if (kopaytma < 100) {
        cout << "Ko'paytma 100 dan KICHIK" << endl;
    }
    else {
        cout << "Ko'paytma 100 GA TENG" << endl;
    }

    return 0;
}