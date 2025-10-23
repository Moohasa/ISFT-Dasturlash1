//4.6.Global va lokal o‘zgaruvchilar farqini ko‘rsatuvchi dastur yozing.
#include <iostream>
using namespace std;

// GLOBAL o'zgaruvchi (barcha funksiyalarda ko'rinadi)
int global_son = 100;

void funksiya() {
    //!!! Hali funksiyalar mavzusi bo'lmagan, shunchaki funksiyalardagi o'zgaruvchilar
    //! ham lokal o'zgaruvchiga kirishini ta'kidlab o'tayapman-))
    
    int lokal_son = 200;
    cout << "Funksiyada: global = " << global_son << ", lokal = " << lokal_son << endl;
}

int main() {
    cout << "main() da: global = " << global_son << endl;
    // cout << lokal_son; // !!!hato, hali mainda loclal o'zgaruvchi e'lon qilinmagan



    funksiya();

   
    int lokal_main = 300;// endi elon qilindi
    cout << "main() da lokal o'zgaruvchi: " << lokal_main << endl;

    return 0;
}

// local o'zgaruvchi faqat ma'lum bir funksiya yoki block ichida amalda bo'ladi, 
// tashqarida esa u ishlamaydi, masalan for siklini ichida sum, if bloki ichida ref, 
// yoki qaytariluvchi metod ichida res yoki result.
//global o'zgaruvchi esa dastur asosiy blokiga yozilib dastur boshidan oxirgacha amalda bo'ladi
//