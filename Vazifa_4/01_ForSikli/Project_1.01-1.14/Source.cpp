#include <iostream>
using namespace std;

int main() {
    cout << "Birinchi reja navbati bilan bitta dasturda bajariladi\n"
        << "for siklini amalda qo'llash" << endl;

    //.........................................................................
    //1.1. 1 dan 10 gacha bo‘lgan sonlarni ekranga chiqaring.
    cout << "1.1\t 1 dan 10 gacha bo'lgan sonlarni ekranga chiqadi" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl << endl;

    //.........................................................................
    //1.2. 1 dan 20 gacha bo‘lgan sonlarni teskari tartibda chiqaring.
    cout << "1.2\t 1 dan 20 gacha bo'lgan sonlar teskari tardibda chiqarish" << endl;
    for (int i = 20; i >= 1; i--) {
        cout << i << " ";
    }
    cout << endl << endl;

    //.........................................................................
    //1.3. 5 dan 50 gacha bo‘lgan sonlarning yig‘indisini toping.
    cout << "1.3\t 5 dan 50 gacha bo'lgan sonlarning yigindisi" << endl;
    int sum_1_3 = 0;
    for (int i = 5; i <= 50; i++) {
        sum_1_3 += i;
    }
    cout << "Yig'indi  " << sum_1_3 << " ga teng" << endl << endl;

    //.........................................................................
    //1.4. 1 dan 10 gacha bo‘lgan sonlarning kvadratlarini chiqaring.
    cout << "1.4\t 1 dan 10 gacha bo'lgan sonlarning kvadratini ekranga chiqarish" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " = " << i * i << endl;
    }
    cout << endl;

    //.........................................................................
    //1.5.Foydalanuvchidan n kiritilib, 1 dan n gacha sonlar yig‘indisini toping.
    cout << "Foydalanuvchidan n kiritilib 1 dan n gacha bo'lgan sonlarni yig'indsi hisoblash" << endl;
    int n_1_5, sum_1_5 = 0;
    cout << "n ni kiriting" << endl;
    cin >> n_1_5;

    for (int i = 1; i <= n_1_5; i++) {
        sum_1_5 += i;
    }
    cout << "Yig'indi " << sum_1_5 << " ga teng" << endl << endl;

    //.........................................................................
    //1.6. 1 dan 100 gacha bo‘lgan toq sonlarni ekranga chiqaring.
    cout << "1.6\t 1 dan 100 gacha bo'lgan toq sonlarni ekranga chiqarish" << endl;
    for (int i = 1; i <= 100; i += 2) {
        cout << i << " ";
    }
    cout << endl << endl;

    //.........................................................................
    //1.7. 1 dan 100 gacha bo‘lgan juft sonlarni yig‘indisini toping.
    cout << "1.7\t 1 dan 100 gacha bo'lgan juft sonlarni ekranga chiqarish" << endl;
    for (int i = 2; i <= 100; i += 2) {
        cout << i << " ";
    }
    cout << endl << endl;

    //.........................................................................
    //1.8.Foydalanuvchidan 5 ta son kiritilib, ularning o‘rtacha qiymatini hisoblang.
    cout << "1.8\t foydalanuvhci beshta son kiritadi, ularni o'rtacha qiymatini hisoblash" << endl;
    cout << "5 ta  sonlarni navbati bilan kiritishni boshlang" << endl;

    int sonlar_1_8[5];
    double sum_1_8 = 0;
    for (int i = 0; i < 5; i++) {
        cin >> sonlar_1_8[i];
        sum_1_8 += sonlar_1_8[i];
    }
    cout << "Kiritilgan sonlarning o'rtacha qiymati " << sum_1_8 / 5 << " ga teng" << endl << endl;

    //.........................................................................
    //1.9. 1 dan 10 gacha bo‘lgan sonlarning ko‘paytmasini toping.
    cout << "1.9\t 1 dan 10 gacha bo'lgan sonlarni ko'paytmasini hisoblash" << endl;
    long long sum_1_9 = 1; // int yetmay qolishi mumkin
    for (int i = 1; i <= 10; i++) {
        sum_1_9 *= i;
    }
    cout << "1 dan 10 gacha bo'lgan sonlarni ko'paytmasi " << sum_1_9 << " ga teng" << endl << endl;

    //.........................................................................
    //1.10. 1 dan 10 gacha bo‘lgan sonlar uchun jadval ko‘rinishida natija chiqaring.
    cout << "1.10\t 1 dan 10 gacha bo'lgan sonlarni jadval ko'rinishida ekranga chiqarish" << endl;
    cout << "+----------+\n";
    for (int i = 1; i <= 10; i++) {
        if (i < 10)
            cout << "| " << i << "        |\n";
        else
            cout << "| " << i << "       |\n";
    }
    cout << "+----------+\n" << endl;

    //.........................................................................
    //1.11.Foydalanuvchidan n kiritilib, 1 dan n gacha sonlarning kvadratlar yig‘indisini hisoblang.
    cout << "1.11\t 1 dan foydalanuvchi kiritgan  n gacha bo'lgan somlarni kavdratlari yigindisini hisobash" << endl;
    int n_1_11, sum_1_11 = 0;
    cout << "n ni kiriting " << endl;
    cin >> n_1_11;
    for (int i = 1; i <= n_1_11; i++) { // 5 emas, 1 dan boshlanishi kerak
        sum_1_11 += i * i;
    }
    cout << "1 dan " << n_1_11 << " gacha bolgan sonlar kvadrati Yig'indisi  " << sum_1_11 << " ga teng" << endl << endl;

    //.........................................................................
    //1.12. 1 dan 10 gacha bo‘lgan sonlar orasidan faqat 3 ga bo‘linadiganlarini chiqaring.
    cout << "1.12\t 1 dan 10 gacha bo'lgan sonlarni orasidan faqat 3 ga bo'linadigan sonlarni chiqarish" << endl;
    for (int i = 3; i <= 10; i += 3) {
        cout << i << " ";
    }
    cout << endl << endl;

    //.........................................................................
    //1.13. 10 dan 1 gacha bo‘lgan sonlar orasida faqat toqlarni chiqaring.
    cout << "1.13\t 10 dan 1 gacha bo'lgan sonlarni teskari tartibda faqat toq sonlarni chiqarish" << endl;
    for (int i = 9; i >= 1; i -= 2) {
        cout << i << " ";
    }
    cout << endl << endl;

    //.........................................................................
    //1.14.Foydalanuvchidan boshlang‘ich va oxirgi son kiritilib, shu oraliqdagi barcha sonlarni chiqaring.
    cout << "foydalanuchvidan ikkta son qabul qilinib, ular orasidagi barcha sonlarni chiqarish" << endl;
    int n_1_12_1, n_1_12_2;
    cout << "ikki sonni kiriting" << endl;
    cin >> n_1_12_1 >> n_1_12_2;
    if (n_1_12_1 > n_1_12_2) {
        for (int i = n_1_12_2; i <= n_1_12_1; i++) {
            cout << i << " ";
        }
    }
    else {
        for (int i = n_1_12_1; i <= n_1_12_2; i++) {
            cout << i << " ";
        }
    }
    cout << endl << endl;

    cout << "\n\n\n" << "Dastur yakunlandi e'tiboringiz uchun rahmat" << endl;
    return 0;
}