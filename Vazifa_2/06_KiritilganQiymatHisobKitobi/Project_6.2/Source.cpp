//6.2.Ikki sonning ayirmasi, ko‘paytmasi va bo‘linmasini topish.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double a, b;
    printf("Ikki son kiriting: ");
    scanf("%lf %lf", &a, &b);
    printf("Ayirma: %.2f\n", a - b);
    printf("Ko'paytma: %.2f\n", a * b);
    if (b != 0) {
        printf("Bo'linma: %.2f\n", a / b);
    }
    else {
        printf("Bo'linma: Nolga bo'lish mumkin emas!\n");
    }
    return 0;
}