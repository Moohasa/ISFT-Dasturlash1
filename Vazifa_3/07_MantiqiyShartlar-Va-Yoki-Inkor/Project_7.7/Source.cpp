//7.7.Son juft emas yoki 10 dan katta bo‘lsa, “Shart bajarildi”.
#include <iostream>
using namespace std;

int main() {
    int son;
    cout << "Butun son kiriting: ";
    cin >> son;
    if (son % 2 != 0 || son > 10) {
        cout << "Shart bajarildi" << endl;
    }
    return 0;
}