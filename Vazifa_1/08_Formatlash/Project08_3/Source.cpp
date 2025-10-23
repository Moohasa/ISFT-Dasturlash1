//8.3. Valyuta hisoboti shaklida (masalan, 12500.50 so‘m) natijani formatlash.
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double summa;
    cout << "Summani kiriting: ";
    cin >> summa;

    cout << fixed << setprecision(2) << summa << " so'm" << endl;
    return 0;
}