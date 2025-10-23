//5.6. Foydalanuvchidan son kiritiladi, uni eng yaqin butun songa yaxlitlang (round, floor, ceil).
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double son;
    cout << "Haqiqiy sonni kiriting: ";
    cin >> son;

    cout << "round(" << son << ") = " << round(son) << "  (eng yaqin butun)" << endl;
    cout << "floor(" << son << ") = " << floor(son) << "  (pastga yaxlit)" << endl;
    cout << "ceil(" << son << ") = " << ceil(son) << "   (yuqoriga yaxlit)" << endl;

    return 0;
}