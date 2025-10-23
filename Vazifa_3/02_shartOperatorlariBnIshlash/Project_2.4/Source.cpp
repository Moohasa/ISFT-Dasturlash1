//2.5.Kiritilgan son 50 dan katta bo‘lsa, “Yaxshi”, 50 dan kichik bo‘lsa “Yomon” deb yozing.
#include <iostream>
using namespace std;

int main() {
    int son;
    cout << "Sonni kiriting: ";
    cin >> son;
    if (son > 50) {
        cout << "Yaxshi" << endl;
    }
    if (son < 50) {
        cout << "Yomon" << endl;
    }
    
    return 0;
}