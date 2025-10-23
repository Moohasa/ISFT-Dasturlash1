//4.5. Bahoga qarab: 90–100 “A”, 80–89 “B”, 70–79 “C”, 60–69 “D”, <60 “F” chiqaring.
#include <iostream>
using namespace std;

int main() {
    int baho;
    cout << "Bahoni kiriting (0-100): ";
    cin >> baho;

    if (baho >= 90) {
        cout << "A" << endl;
    }
    else {
        if (baho >= 80) {
            cout << "B" << endl;
        }
        else {
            if (baho >= 70) {
                cout << "C" << endl;
            }
            else {
                if (baho >= 60) {
                    cout << "D" << endl;
                }
                else {
                    cout << "F" << endl;
                }
            }
        }
    }
    return 0;
}