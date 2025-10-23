//5.2.Sonning sinus, kosinus, tangensini hisoblang(sin, cos, tan).
#define _USE_MATH_DEFINES//PI uchun
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double gradus;
    cout << "Burchakni gradusda kiriting: ";
    cin >> gradus;

    double radian = gradus * M_PI / 180.0; // Gradusdan radanga o'tish

    cout << gradus << " ning sinus: " << sin(radian) << endl;
    cout << gradus << " ning kosinus: " << cos(radian) << endl;
    cout << gradus << " ning tangens: " << tan(radian) << endl;

    return 0;
}