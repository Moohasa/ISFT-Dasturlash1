//8.1. Son juft yoki toqligini aniqlang.
#include <iostream>
using namespace std;

int main() {
    int son;
    cout << "Butun son kiriting: ";
    cin >> son;
    if (son % 2 == 0) {
        cout << "Juft son" << endl;
    }
    else {
        cout << "Toq son" << endl;
    }
    return 0;
}