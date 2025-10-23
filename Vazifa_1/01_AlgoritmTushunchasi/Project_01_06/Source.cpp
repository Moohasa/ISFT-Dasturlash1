//1.6. Uchta butun sonning eng kattasini aniqlaydigan dastur yozing.

#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cout << "Uchta butun son kiriting: ";
    cin >> a >> b >> c;

    int eng_katta = a;
    if (b > eng_katta) eng_katta = b;
    if (c > eng_katta) eng_katta = c;

    cout << "Eng katta son: " << eng_katta << endl;
    return 0;
}