//6.4.Berilgan radius bo‘yicha aylana yuzi va uzunligini hisoblash

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14159

int main() {
    double r;
    printf("Radiusni kiriting: ");
    scanf("%lf", &r);
    if (r < 0) {
        printf("Radius manfiy bo'lishi mumkin emas!\n");
        return 1;
    }
    double yuza = PI * r * r;
    double uzunlik = 2 * PI * r;
    printf("Aylana yuzi: %.2f\n", yuza);
    printf("Uzunlik: %.2f\n", uzunlik);
    return 0;
}