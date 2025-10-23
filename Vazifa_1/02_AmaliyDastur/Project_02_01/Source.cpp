//2.1.Foydalanuvchidan ism, familiya, yosh ma’lumotlarini kiritib, barchasini chiroyli shaklda ekranga chiqaruvchi dastur yarating.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string ism, familiya;
    int yosh;

    cout << "Ismingiz: ";
    getline(cin, ism);
    cout << "Familiyangiz: ";
    getline(cin, familiya);
    cout << "Yoshingiz: ";
    cin >> yosh;

    cout << "\n--- Foydalanuvchi ma'lumotlari ---" << endl;
    cout << "Ism: " << ism << endl;
    cout << "Familiya: " << familiya << endl;
    cout << "Yosh: " << yosh << " yosh" << endl;

    return 0;
}