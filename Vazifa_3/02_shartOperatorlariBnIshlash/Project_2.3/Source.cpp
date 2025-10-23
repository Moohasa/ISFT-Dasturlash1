//2.3. Kiritilgan son 0 dan farq qilsa, “Nol emas” deb yozing.

#include <iostream>
using namespace std;

int main() {
    int son;
    cout << "Sonni kiriting: ";
    cin >> son;
    if (son != 0) {
        cout << "Nol emas" << endl;
    }
    return 0;
}