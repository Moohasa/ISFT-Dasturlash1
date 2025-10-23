//1.6.Kiritilgan son 5 ga bo‘linadigan bo‘lsa, “Bo‘linadi”, aks holda “Bo‘linmaydi”
#include <iostream>
using namespace std;

int main() {
    int son;
    cout << "Butun son kiriting: ";
    cin >> son;
    if (son % 5 == 0) {
        cout << "qoldiqsiz bo'linadi" << endl;
    }
    else {
        cout << "qoldiqsiz bo'linmaydi" << endl;
    }
    return 0;
}