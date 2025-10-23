//3.2.Foydalanuvchidan baho kiritiladi, agar 60 dan katta bo‘lsa “O‘tdi”, aks holda “O‘tmadi”.
#include <iostream>
using namespace std;

int main() {
    int baho;
    cout << "Bahoni kiriting: ";
    cin >> baho;
    if (baho > 60) {
        cout << "O'tdi" << endl;
    }
    else {
        cout << "O'tmadi" << endl;
    }
    return 0;
}