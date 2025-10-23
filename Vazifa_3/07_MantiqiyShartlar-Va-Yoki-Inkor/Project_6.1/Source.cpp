//7.1. Son 1 dan 100 gacha oraliqda bo‘lsa “Oraliqda” deb chiqaring.
#include <iostream>
using namespace std;

int main() {
    int son;
    cout << "Sonni kiriting: ";
    cin >> son;
    if (son >= 1 && son <= 100) {
        cout << "Oraliqda" << endl;
    }
    return 0;
}