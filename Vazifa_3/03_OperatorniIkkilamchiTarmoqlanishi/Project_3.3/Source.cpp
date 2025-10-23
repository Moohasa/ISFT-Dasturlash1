//3.3.Foydalanuvchidan yil kiritilib, agar yil kabisa bo‘lsa “Kabisa yili” deb chiqaring.
#include <iostream>
using namespace std;

int main() {
    int yil;
    cout << "Yilni kiriting: ";
    cin >> yil;

    if ((yil % 4 == 0 && yil % 100 != 0) || (yil % 400 == 0)) {
        cout << "Kabisa yili" << endl;
    }
    else {
        cout << "Kabisa yili emas" << endl;
    }

    return 0;
}