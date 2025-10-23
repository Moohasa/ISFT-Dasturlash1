//4.3. Butun, haqiqiy va belgili o‘zgaruvchilar bilan hisob-kitob bajaruvchi dastur yozing.
#include <iostream>
using namespace std;

int main() {
    int butun = 10;
    double haqiqiy = 3.5;
    char belgi = '5'; // ASCII 53

    double natija1 = butun + haqiqiy;        // 13.5
    int natija2 = butun + (belgi - '0');     // 10 + 5 = 15

    cout << "Butun + Haqiqiy = " << natija1 << endl;
    cout << "Butun + Belgidagi son = " << natija2 << endl;

    return 0;
}