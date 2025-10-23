//7.5. Son kiritilganda, uning juft yoki toqligini aniqlang.
#include <iostream>
using namespace std;

int main() {
    int son;
    cout << "Butun son kiriting: ";
    cin >> son;

    if (son % 2 == 0) {
        cout << son << " - JUFT son" << endl;
    }
    else {
        cout << son << " - TOQ son" << endl;
    }

    return 0;
}