//1.4. Son 100 dan katta bo‘lsa “Katta son”, aks holda “Kichik son” deb chiqaring.
#include <iostream>
using namespace std;

int main() {
    int son;
    cout << "Sonni kiriting: ";
    cin >> son;
    if (son > 100) {
        cout << "Katta son" << endl;
    }
    else {
        cout << "Kichik son" << endl;
    }
    return 0;
}