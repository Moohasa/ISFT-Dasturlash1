// 1.5. Foydalanuvchidan raqam kiritilib, u juft bo‘lsa “Juft son” chiqsin.
#include <iostream>
using namespace std;

int main() {
    int son;
    cout << "Butun son kiriting: ";
    cin >> son;
    if (son % 2 == 0) {
        cout << "Juft son" << endl;
    }
    else {
        cout << "Toq son" << endl;
    }
    return 0;
}