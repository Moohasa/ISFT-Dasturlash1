//7.2. Uchburchakning balandligi va asosi berilgan. Yuzini toping.
#include <iostream>
using namespace std;

int main() {
    double asos, balandlik;
    cout << "Asos va balandlikni kiriting: ";
    cin >> asos >> balandlik;

    if (asos <= 0 || balandlik <= 0) {
        cout << "Asos va balandlik musbat bo'lishi kerak!" << endl;
        return 1;
    }

    double yuza = 0.5 * asos * balandlik;
    cout << "Uchburchak yuzi: " << yuza << endl;

    return 0;
}