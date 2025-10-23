//2.2.Foydalanuvchidan son kiritilib, agar son toq bo‘lsa, “Toq son” deb chiqaring.
#include <iostream>
using namespace std;

int main() {
    int son;
    cout << "Butun son kiriting: ";
    cin >> son;
    if (son % 2 == 1) {
        cout << "Toq son" << endl;
    }
    return 0;
}