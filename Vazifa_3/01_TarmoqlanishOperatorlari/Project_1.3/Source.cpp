//1.3.Foydalanuvchidan harorat qiymati kiritilib, 0 dan past bo‘lsa “Sovuq”, aks holda “Iliq” deb chiqaring.
#include <iostream>
using namespace std;

int main() {
    double harorat;
    cout << "Haroratni kiriting: ";
    cin >> harorat;
    if (harorat < 0) {
        cout << "Sovuq" << endl;
    }
    else {
        cout << "Iliq" << endl;
    }
    return 0;
}
