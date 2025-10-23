//7.5.Yil 4 ga bo‘linib, 100 ga bo‘linmasa yoki 400 ga bo‘linsa “Kabisa yili”.

#include <iostream>
using namespace std;

int main() {
    int yil;
    cout << "Yilni kiriting: ";
    cin >> yil;
    if ((yil % 4 == 0 && yil % 100 != 0) || (yil % 400 == 0)) {
        cout << "Kabisa yili" << endl;
    }
    return 0;
}