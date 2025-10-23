//5.5.Bahoga qarab harfli baho chiqaring(1→“F”, 2→“E”, 3→“D”, 4→“C”, 5→“A”).
#include <iostream>
using namespace std;

int main() {
    int baho;
    cout << "Bahoni kiriting (1-5): ";
    cin >> baho;

    switch (baho) {
    case 1: cout << "F" << endl; break;
    case 2: cout << "E" << endl; break;
    case 3: cout << "D" << endl; break;
    case 4: cout << "C" << endl; break;
    case 5: cout << "A" << endl; break;
    default: cout << "Noto'g'ri baho!" << endl;
    }
    return 0;
}