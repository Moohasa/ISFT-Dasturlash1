//7.3.Son manfiy emas va juft bo‘lsa “Mos son”.

#include <iostream>
using namespace std;

int main() {
    int son;
    cout << "Butun son kiriting: ";
    cin >> son;
    if (son >= 0 && son % 2 == 0) {
        cout << "Mos son" << endl;
    }
    return 0;
}