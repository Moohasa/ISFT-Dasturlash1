//7.2. Son 5 ga ham, 7 ga ham bo‘linadigan bo‘lsa “Bo‘linadi”.
#include <iostream>
using namespace std;

int main() {
    int son;
    cout << "Butun son kiriting: ";
    cin >> son;
    if (son % 5 == 0 && son % 7 == 0) {
        cout << "Bo'linadi" << endl;
    }
    return 0;
}