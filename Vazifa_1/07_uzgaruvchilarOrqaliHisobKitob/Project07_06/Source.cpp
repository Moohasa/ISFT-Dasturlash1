//7.6. Uchta son kiritiladi, ularning eng kattasini toping.

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Uchta butun son kiriting: ";
    cin >> a >> b >> c;

    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    cout << "Eng katta son: " << max << endl;

    return 0;
}