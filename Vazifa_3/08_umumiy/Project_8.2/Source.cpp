//8.2. Foydalanuvchidan oy raqami kiritilib, qaysi faslga tegishli ekanini chiqaring
#include <iostream>
using namespace std;

int main() {
    int oy;
    cout << "Oy raqamini kiriting (1-12): ";
    cin >> oy;
    if (oy == 12 || oy == 1 || oy == 2) {
        cout << "Qish" << endl;
    }
    else if (oy >= 3 && oy <= 5) {
        cout << "Bahor" << endl;
    }
    else if (oy >= 6 && oy <= 8) {
        cout << "Yoz" << endl;
    }
    else if (oy >= 9 && oy <= 11) {
        cout << "Kuz" << endl;
    }
    else {
        cout << "Noto'g'ri oy" << endl;
    }
    return 0;
}