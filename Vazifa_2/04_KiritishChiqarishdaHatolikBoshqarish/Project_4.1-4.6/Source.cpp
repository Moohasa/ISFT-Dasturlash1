/*4: Kiritish-chiqarish jarayonida yuzaga keluvchi xatoliklarni aniqlash (6 ta masala)
4.1.Foydalanuvchi son o‘rniga matn kiritsa, xatolik haqida xabar beruvchi dastur.
4.2.Kiritilgan qiymat manfiy bo‘lsa, “Musbat son kiriting” degan xabar chiqsin.
4.3.Noto‘g‘ri ma’lumot turi kiritilganda dastur ishlashini to‘xtatsin.
4.4.scanf() yordamida qiymat kiritilmasa, “Kiritish amalga oshmadi” deb chiqsin.
4.5.Belgilar o‘rniga son kiritilganda dastur xabar bersin.
4.6.Noto‘g‘ri kirish holatlarida “Xato!” so‘zi bilan ekranga chiqsin.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 4.1: Son o'rniga matn kiritilsa
    int son1;
    printf("4.1: Butun son kiriting: ");
    if (scanf("%d", &son1) != 1) {
        printf("Xato! Siz son emas, matn kiritdingiz.\n");
        return 1;
    }
    printf("OK: %d\n\n", son1);

    // 4.2: Manfiy son kiritilsa
    int son2;
    printf("4.2: Musbat son kiriting: ");
    if (scanf("%d", &son2) != 1) {
        printf("Xato! Butun son kiritilmadi.\n");
        return 1;
    }
    if (son2 < 0) {
        printf("Musbat son kiriting!\n");
        return 1;
    }
    printf("Rahmat! %d qabul qilindi.\n\n", son2);

    // 4.3: Noto'g'ri ma'lumot turi
    int son3;
    printf("4.3: Butun son kiriting: ");
    if (scanf("%d", &son3) != 1) {
        printf("Xato! Noto'g'ri ma'lumot turi kiritildi. Dastur to'xtaydi.\n");
        return 1;
    }
    printf("Qabul qilindi: %d\n\n", son3);

    // 4.4: Kiritish amalga oshmasa (masalan, harf kiritilsa)
    int son4;
    printf("4.4: Butun son kiriting: ");
    if (scanf("%d", &son4) != 1) {
        printf("Kiritish amalga oshmadi.\n");
        return 1;
    }
    printf("Muvaffaqiyatli kiritildi: %d\n\n", son4);

    // 4.5: Belgilar o'rniga son kiritilsa
    char belgi;
    printf("4.5: Belgini kiriting: ");
    if (scanf(" %c", &belgi) != 1) {
        printf("Xato! Belgini o'qib bo'lmadi.\n");
        return 1;
    }
    if (belgi >= '0' && belgi <= '9') {
        printf("Xato! Siz son kiritdingiz, lekin belgi kutilayotgan edi.\n");
        return 1;
    }
    printf("Belgi qabul qilindi: '%c'\n\n", belgi);

    // 4.6: Umumiy xato tekshiruvi
    int son6;
    printf("4.6: Musbat butun son kiriting: ");
    if (scanf("%d", &son6) != 1 || son6 < 0) {
        printf("Xato!\n");
        return 1;
    }
    printf("OK: %d\n", son6);

    printf("\nBarcha testlar muvaffaqiyatli o'tkazildi!\n");
    return 0;
}