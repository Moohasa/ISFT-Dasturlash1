//8.6. Foydalanuvchi 5 ta son kiritsa, ularning o‘rtacha qiymatini topish.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    float a, b, c, d, e;
    printf("5 ta son kiriting: ");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
    float ortacha = (a + b + c + d + e) / 5.0f;
    printf("O'rtacha qiymat: %.2f\n", ortacha);
    return 0;
}