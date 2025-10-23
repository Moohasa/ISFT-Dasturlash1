//6.4.Oy raqamini kiritganda fasl nomini qaytaruvchi menyu.
#include <iostream>
using namespace std;

int main() {
    int oy;
    cout << "Oy raqamini kiriting (1-12): ";
    cin >> oy;
    switch (oy) {
    case 12: case 1: case 2: cout << "Qish" << endl; break;
    case 3: case 4: case 5: cout << "Bahor" << endl; break;
    case 6: case 7: case 8: cout << "Yoz" << endl; break;
    case 9: case 10: case 11: cout << "Kuz" << endl; break;
    default: cout << "Noto'g'ri oy" << endl;
    }
    return 0;
}