//8.6. Natijalarni setw(), setprecision() yordamida formatlab chiqarish.

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double x = 3.14159265;
    int y = 42;

    cout << "Aniq: " << setprecision(4) << x << endl;
    cout << "To'g'ri: " << setw(10) << y << " | " << setw(10) << x << endl;
    cout << "Chapga: " << left << setw(10) << y << " | " << setw(10) << fixed << setprecision(2) << x << endl;

    return 0;
}