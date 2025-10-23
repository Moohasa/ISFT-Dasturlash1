//5.3. Absolyut qiymatni (fabs) hisoblash dasturini yozing.
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double son;
    cout << "Sonni kiriting: ";
    cin >> son;

    cout << "|" << son << "| = " << fabs(son) << endl;

    return 0;
}