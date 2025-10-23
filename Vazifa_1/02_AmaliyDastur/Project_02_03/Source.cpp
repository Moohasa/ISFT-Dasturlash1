//2.3.To‘g‘ri to‘rtburchakning uzunligi va eni berilgan.Uning yuzi va perimetrini hisoblang.
#include <iostream>
using namespace std;

int main() {
    double uzunlik, eni;
    cout << "Uzunlikni kiriting: ";
    cin >> uzunlik;
    cout << "Enini kiriting: ";
    cin >> eni;

    double yuza = uzunlik * eni;
    double perimetr = 2 * (uzunlik + eni);

    cout << "Yuza: " << yuza << endl;
    cout << "Perimetr: " << perimetr << endl;

    return 0;
}