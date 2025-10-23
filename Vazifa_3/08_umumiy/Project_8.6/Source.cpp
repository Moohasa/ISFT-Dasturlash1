//8.6. Kiritilgan son 3 ga ham, 5 ga ham bo‘linadi degan shartni tekshiring.
#include <iostream>
using namespace std;

int main() {
    int son;
    cout << "Butun son kiriting: ";
    cin >> son;
    if (son % 3 == 0 && son % 5 == 0) {
        cout << "3 ga ham, 5 ga ham bo'linadi" << endl;
    }
    else {
        cout << "Shart bajarilmadi" << endl;
    }
    return 0;
}