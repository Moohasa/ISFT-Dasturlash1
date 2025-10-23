//7.4. Foydalanuvchidan t vaqt va v tezlik berilganda, masofa s=v×ts = v \times ts=v×t ni hisoblang.

#include <iostream>
using namespace std;

int main() {
    double v, t;
    cout << "Tezlik (v) va vaqt (t) ni kiriting: ";
    cin >> v >> t;

    if (t < 0) {
        cout << "Vaqt manfiy bo'lishi mumkin emas!" << endl;
        return 1;
    }

    double s = v * t;
    cout << "Masofa s = v * t = " << s << " KM" << endl;

    return 0;
}