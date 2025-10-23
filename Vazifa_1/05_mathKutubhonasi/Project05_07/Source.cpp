//5.7.Berilgan x uchun 
// y = sin⁡(x) + cos⁡(2x)y = \sin(x) + \cos(2x)y = sin(x) + cos(2x) 
// ifodani hisoblang

//!!! shuni yahshi tushunmadim, sin(x) + cos(2*x) xisoblab turibman
//! agar formula yana ham tushunarliroq bo'lsa kodni o'zgartirib qo'uamiz-)
#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x_gradus;
    cout << "x ni gradusda kiriting: ";
    cin >> x_gradus;

    double x = x_gradus * M_PI / 180.0; // radanga o'tish
    double y = sin(x) + cos(2 * x);

    cout << "y = sin(" << x_gradus << ") + cos(2*" << x_gradus << ") = " << y << endl;

    return 0;
}