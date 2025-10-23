//5.4. 1–4 kiritilganda chorak raqamini so‘z bilan chiqaring (“Birinchi chorak” va hokazo)
#include <iostream>
using namespace std;

int main() {
    int chorak;
    cout << "Chorak raqamini kiriting (1-4): ";
    cin >> chorak;

    switch (chorak) {
    case 1: cout << "Birinchi chorak" << endl; break;
    case 2: cout << "Ikkinchi chorak" << endl; break;
    case 3: cout << "Uchinchi chorak" << endl; break;
    case 4: cout << "To'rtinchi chorak" << endl; break;
    default: cout << "Noto'g'ri chorak!" << endl;
    }
    return 0;
}