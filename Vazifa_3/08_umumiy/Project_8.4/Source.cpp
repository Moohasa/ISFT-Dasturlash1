//8.4.Haroratga qarab kiyim tavsiya etuvchi dastur yozing
#include <iostream>
using namespace std;

int main() {
    double harorat;
    cout << "Haroratni kiriting (°C): ";
    cin >> harorat;
    if (harorat > 30) {
        cout << "Yengil kiyim, futbolka" << endl;
    }
    else if (harorat >= 20) {
        cout << "Oddiy kiyim" << endl;
    }
    else if (harorat >= 10) {
        cout << "jemfer, kostyum" << endl;
    }
    else if (harorat >= 0) {
        cout << "yengil kurtka, shapka" << endl;
    }
    else {
        cout << "qalin kurtka, qo'lqop" << endl;
    }
    return 0;
}