//2.4. Son 3 ga bo‘linadigan bo‘lsa, “3 ga bo‘linadi” deb chiqaring.
#include <iostream>
using namespace std;

int main() {
    int son;
    cout << "Butun son kiriting: ";
    cin >> son;
    if (son % 3 == 0) {
        cout << "3 ga bo'linadi" << endl;
    }
    return 0;
}