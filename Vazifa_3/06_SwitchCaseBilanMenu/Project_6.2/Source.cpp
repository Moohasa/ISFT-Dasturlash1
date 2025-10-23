//6.2.Valyuta konvertori menyusi(USD, EUR, RUB → UZS).
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    cout << "summani kiriting va valyutani tanlang" << endl;
    cout << "1 AQSH dollari\n 2 Yevro\n 3 Rossiya rubli" << endl;
    int tanlov;
    double summa;
    cin  >> summa >> tanlov;
    const double USD = 12800, EUR = 13800, RUB = 140;
    cout << fixed << setprecision(2);
    switch (tanlov) {
    case 1: cout << summa * USD << endl; break;
    case 2: cout << summa * EUR << endl; break;
    case 3: cout << summa * RUB << endl; break;
    default: cout << "Noto'g'ri valyuta" << endl;
    }
    return 0;
}