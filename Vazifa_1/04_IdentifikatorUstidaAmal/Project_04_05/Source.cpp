//4.5.Konstantalardan foydalanib radius qiymatini o‘zgartirmasdan hisoblash
#include <iostream>
using namespace std;

int main() {
    const double PI = 3.14159;
    const double radius = 7.0; // o'zgartirib bo'lmaydigan konstanta.

    double yuza = PI * radius * radius;
    double perimetr = 2 * PI * radius;

    cout << "Radius: " << radius << endl;
    cout << "Yuza: " << yuza << endl;
    cout << "Perimetr: " << perimetr << endl;



    return 0;
}