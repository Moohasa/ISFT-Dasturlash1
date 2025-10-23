//2.2. Haroratni Selsiydan Farengeytga o‘tkazuvchi dastur tuzing.
#include <iostream>
using namespace std;

int main() {
    double celsius;
    cout << "Haroratni Selsiyda kiriting: ";
    cin >> celsius;

    double fahrenheit = (celsius * 9.0 / 5.0) + 32;
    cout << celsius << "C = " << fahrenheit << "F" << endl;

    return 0;
}