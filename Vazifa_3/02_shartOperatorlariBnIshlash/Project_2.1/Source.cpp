//2.1. Foydalanuvchi tomonidan kiritilgan son 10 dan katta bo‘lsa, “Shart bajarildi” chiqsin.
#include <iostream>
using namespace std;

int main() {
    int son;
    cout << "Sonni kiriting: ";
    cin >> son;
    if (son > 10) {
        cout << "Shart bajarildi" << endl;
    }
    // else{
    //count << "shart bajarilmadi"<<endl} 
    return 0;
}