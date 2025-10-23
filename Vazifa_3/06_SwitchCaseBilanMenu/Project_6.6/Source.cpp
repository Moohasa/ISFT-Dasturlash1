//6.6.Foydalanuvchi 1 bosganda “Salom”, 2 bosganda “Xayr” deb chiqaring.
#include <iostream>
using namespace std;

int main() {
    int tanlov;
    cout << "1 Salom\n2 Xayr\nTanlang: ";
    cin >> tanlov;
    switch (tanlov) {
    case 1: cout << "Salom" << endl; break;
    case 2: cout << "Xayr" << endl; break;
    default: cout << "Noto'g'ri tanlov" << endl;
    }
    return 0;
}