//4.6. Kiritilgan soatga qarab “Ertalab”, “Kunduzi”, “Kechqurun”, “Tunda” deb chiqaring.
#include <iostream>
using namespace std;

int main() {
    int soat;
    cout << "Soatni kiriting (0-23): ";
    cin >> soat;

    if (soat >= 5 && soat < 12) {
        cout << "Ertalab" << endl;
    }
    else {
        if (soat >= 12 && soat < 17) {
            cout << "Kunduzi" << endl;
        }
        else {
            if (soat >= 17 && soat < 22) {
                cout << "Kechqurun" << endl;
            }
            else {
                cout << "Tunda" << endl;
            }
        }
    }
    return 0;
}