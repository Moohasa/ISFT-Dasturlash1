//7.6. Foydalanuvchidan 3 son kiritilib, faqat bittasi manfiy bo‘lsa “Bitta manfiy” chiqsin.
#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Uchta butun son kiriting: ";
    cin >> a >> b >> c;

      if ((a < 0 && b >= 0 && c >= 0) ||
        (b < 0 && a >= 0 && c >= 0) ||
        (c < 0 && a >= 0 && b >= 0)) {
        cout << "Bitta manfiy" << endl;
    }

    return 0;
}