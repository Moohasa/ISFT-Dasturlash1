//6.4. Sonning kvadrat ildizi va kvadratini topuvchi dastur yozing.

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double son;
    cout << "Sonni kiriting: ";
    cin >> son;

    double kvadrat = son * son;
    cout << son << " ning kvadrati: " << kvadrat << endl;

    if (son >= 0) {
        double ildiz = sqrt(son);
        cout << son << " ning kvadrat ildizi: " << ildiz << endl;
    }
    else {
        cout << "Manfiy sonning kvadrat ildizi mavjud emas (haqiqiy sonlar sohasida)." << endl;
    }

    return 0;
}