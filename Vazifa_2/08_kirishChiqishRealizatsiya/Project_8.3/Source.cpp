//8.3. scanf()da har xil format spetsefikatorlardan bir qatorda foydalanish (%d %f %c).
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int butun;
    float haqiqiy;
    char belgi;
    printf("Butun son, haqiqiy son va belgi kiriting: ");
    // Belgidan oldin bo'shliq qo'yish — \n ni o'tkazib yuborish uchun
    scanf("%d %f %c", &butun, &haqiqiy, &belgi);
    printf("Butun: %d\nHaqiqiy: %.2f\nBelgi: '%c'\n", butun, haqiqiy, belgi);
    return 0;
}