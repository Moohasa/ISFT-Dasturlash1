//6.5. Kiritilgan sonning kvadratini va kubini hisoblab chiqarish.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double x;
    printf("Sonni kiriting: ");
    scanf("%lf", &x);
    printf("%.2f ning kvadrati: %.2f\n", x, x * x);
    printf("%.2f ning kubi: %.2f\n", x, x * x * x);
    return 0;
}