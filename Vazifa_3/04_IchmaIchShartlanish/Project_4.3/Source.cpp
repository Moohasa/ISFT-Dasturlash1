//4.3.Kiritilgan son musbat va juft bo‘lsa “Mos”, aks holda “Nomos”
#include <iostream>
using namespace std;

int main() {
    int son;
    cout << "Butun son kiriting: ";
    cin >> son;

    if (son > 0) {
        if (son % 2 == 0) {
            cout << "Mos" << endl;
        }
        else {
            cout << "Mos emas" << endl;
        }
    }
    else {
        cout << "mos emas" << endl;
    }
    return 0;
}