//6.3. Foydalanuvchi tanlagan shakl yuzini hisoblovchi menyu (doira, kvadrat, to‘rtburchak).
#include <iostream>
using namespace std;

int main() {
    int tanlov;
    cout << "Shaklni tanlang:\n1 Doira\n2 Kvadrat\n3 To'rtburchak\n";
    cin >> tanlov;
    double yuza = 0;
    if (tanlov == 1) {
        double r; cout << "Radius: "; cin >> r;
        yuza = 3.14159 * r * r;
    }
    else if (tanlov == 2) {
        double a; cout << "Tomon: "; cin >> a;
        yuza = a * a;
    }
    else if (tanlov == 3) {
        double a, b; cout << "Tomonlar (a b): "; cin >> a >> b;
        yuza = a * b;
    }
    if (tanlov >= 1 && tanlov <= 3) {
        cout << "Yuza: " << yuza << endl;
    }
    else {
        cout << "Noto'g'ri tanlov" << endl;
    }
    return 0;
}