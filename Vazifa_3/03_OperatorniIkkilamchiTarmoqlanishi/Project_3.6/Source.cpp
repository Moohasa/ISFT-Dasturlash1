//3.6. Kiritilgan son manfiy bo‘lsa modul qiymatini chiqaring.
#include <iostream>
using namespace std;

int main() {
    int son;
    cout << "Butun son kiriting: ";
    cin >> son;
    if (son < 0) {
        cout << "Modul qiymati: " << -son << endl;
    }
    else {
        cout << "Son musbat: " << son << endl;
    }
    return 0;
}