//2.6.Biror mahsulot narxi va miqdori kiritiladi.Umumiy to‘lov summasini hisoblang.

#include <iostream>
using namespace std;

int main() {
    double narx;
    int miqdor;

    cout << "Mahsulot narxini (so'm): ";
    cin >> narx;
    cout << "Miqdor (dona): ";
    cin >> miqdor;

    double umumiy = narx * miqdor;
    cout << "Umumiy to'lov: " << umumiy << " so'm" << endl;

    return 0;
}