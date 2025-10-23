//7.4. Foydalanuvchi ismi “Ali” yoki “Vali” bo‘lsa, “Kirish ruxsat etildi”.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string ism;
    cout << "Ismingizni kiriting: ";
    cin >> ism;
    if (ism == "Ali" || ism == "Vali") {
        cout << "Kirish ruxsat etildi" << endl;
    }
    return 0;
}