//6.6. Uchburchakning yuzi va perimetrini hisoblang (Geron formulasi).
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c;
    cout << "Uchburchakning uch tomonini kiriting: ";
    cin >> a >> b >> c;

  //shart operatorlari mavzusi hali o'tilmadi, lekin busiz ilojsiz!!!
    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Bunday uchburchak mavjud emas!" << endl;
        return 1;
    }

    double perimetr = a + b + c;
    double p = perimetr / 2.0;
    double yuza = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << "Perimetr: " << perimetr << endl;
    cout << "Yuza (Geron): " << yuza << endl;

    return 0;
}