//2.6. Agar foydalanuvchi ismi “Ali” bo‘lsa, “Salom, Ali!” deb chiqarin

#include <iostream>
#include <string>
using namespace std;

int main() {
    string ism;
    cout << "Ismingizni kiriting: ";
    cin >> ism;
    if (ism == "Ali") {
        cout << "Salom, Ali!" << endl;
    }
    return 0;
}