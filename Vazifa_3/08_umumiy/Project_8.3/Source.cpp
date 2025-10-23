//8.3. Ball bo‘yicha baho aniqlovchi dastur (0–100 oraliqda).
#include <iostream>
using namespace std;

int main() {
    int ball;
    cout << "Ballni kiriting (0-100): ";
    cin >> ball;
    if (ball >= 90) {
        cout << "A" << endl;
    }
    else if (ball >= 80) {
        cout << "B" << endl;
    }
    else if (ball >= 70) {
        cout << "C" << endl;
    }
    else if (ball >= 60) {
        cout << "D" << endl;
    }
    else if (ball >= 0) {
        cout << "F" << endl;
    }
    else {
        cout << "Noto'g'ri ball" << endl;
    }
    return 0;
}