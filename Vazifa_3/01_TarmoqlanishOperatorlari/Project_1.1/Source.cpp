//1.1. Kiritilgan son musbat, manfiy yoki nol ekanini aniqlang.
#include <iostream>
using namespace std;

int main() {
    int son;
    cout << "Sonni kiriting: ";
    cin >> son;
    if (son > 0) {
        cout << "Musbat" << endl;
    }
    else if (son < 0) {
        cout << "Manfiy" << endl;
    }
    else {
        cout << "Nol" << endl;
    }
    return 0;
}