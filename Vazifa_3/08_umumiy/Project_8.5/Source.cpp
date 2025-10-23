//8.5.Kiritilgan vaqt(soat) bo‘yicha salomlashuv : “Ertalab”, “Kechqurun” va hokazo

#include <iostream>
using namespace std;

int main() {
    int soat;
    cout << "Soatni kiriting (0-23): ";
    cin >> soat;
    if (soat >= 5 && soat < 10) {
        cout << "Hayrli tong" << endl;
    }
    else if (soat >= 10 && soat < 17) {
        cout << "Hayrli kun" << endl;
    }
    else if (soat >= 17 && soat < 22) {
        cout << "hayrli kech" << endl;
    }
    else if (soat < 5 && soat > 22){
        cout << "oqshomingiz hayrli o'tsin" << endl;
    }
    else if (soat > 24) {
        cout << "iltimos tog'ri vaqtni kiriting" <<endl;
    }
    return 0;
}