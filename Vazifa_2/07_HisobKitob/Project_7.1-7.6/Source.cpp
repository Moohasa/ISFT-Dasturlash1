/*
* 7.1. Foydalanuvchidan ikki butun son kiritilib, yig‘indi, ayirma, ko‘paytma chiqarilsin.
7.2. Hamma natijalarni bitta printf yordamida chiqaruvchi dastur yozing.
7.3. Hamma amallarni float tipida hisoblab, 2 xonagacha aniqlikda chiqarish.
7.4. Natijani chiroyli shaklda jadval ko‘rinishida ko‘rsating.
7.5. Foydalanuvchidan ikki son kiritilib, ularning o‘rta arifmetigini hisoblang.
7.6. Kiritilgan sonlardan biri 0 bo‘lsa, “Bo‘linma mavjud emas” deb chiqsin.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    // 7.1: Foydalanuvchidan ikki butun son kiritish
    int a, b;
    printf("7.1: Ikki butun son kiriting: ");
    scanf("%d %d", &a, &b);

    // 7.2 va 7.3: Hamma amallarni float sifatida hisoblash
    float yigindi = (float)a + b;
    float ayirma = (float)a - b;
    float kopaytma = (float)a * b;
    float bo_linma;
    int nolga_bo_lindi = 0; // 0 — bo'linmagan, 1 — bo'linmagan

    if (b == 0) {
        nolga_bo_lindi = 1;
    }
    else {
        bo_linma = (float)a / b;
    }

    // 7.2: Hamma natijalarni BIRTA printf da chiqarish
    printf("\n7.2-7.3: Natijalar (2 xonagacha):\n");
    if (nolga_bo_lindi) {
        printf("Yig'indi: %.2f | Ayirma: %.2f | Ko'paytma: %.2f | Bo'linma: N/A\n",
            yigindi, ayirma, kopaytma);
    }
    else {
        printf("Yig'indi: %.2f | Ayirma: %.2f | Ko'paytma: %.2f | Bo'linma: %.2f\n",
            yigindi, ayirma, kopaytma, bo_linma);
    }

    // 7.4: Jadval ko'rinishida chiroyli chiqarish
    printf("\n7.4: Jadval ko'rinishida:\n");
    printf("| %-10s | %-10s |\n", "Amal", "Natija");
    printf("|------------|------------|\n");
    printf("| %-10s | %-10.2f |\n", "Yig'indi", yigindi);
    printf("| %-10s | %-10.2f |\n", "Ayirma", ayirma);
    printf("| %-10s | %-10.2f |\n", "Ko'paytma", kopaytma);
    if (nolga_bo_lindi) {
        printf("| %-10s | %-10s |\n", "Bo'linma", "N/A");
    }
    else {
        printf("| %-10s | %-10.2f |\n", "Bo'linma", bo_linma);
    }

    // 7.5: O'rta arifmetik
    float orta_arifmetik = ((float)a + b) / 2.0f;
    printf("\n7.5: O'rta arifmetik: %.2f\n", orta_arifmetik);

    // 7.6: Agar biri 0 bo'lsa, xabar chiqarish (bo'linma uchun)
    if (nolga_bo_lindi) {
        printf("\n7.6: Bo'linma mavjud emas (ikkinchi son 0).\n");
    }
    else {
        printf("\n7.6: Bo'linma mavjud.\n");
    }

    return 0;
}