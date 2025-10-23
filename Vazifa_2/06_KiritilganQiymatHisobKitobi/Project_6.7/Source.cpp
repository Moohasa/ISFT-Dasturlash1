//6.7.Foydalanuvchidan x kiritilib, y = 3x2−2x + 5 y = 3x ^ 2 - 2x + 5 y = 3x2−2x + 5 ni hisoblash.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double x;
    printf("x ni kiriting: ");
    scanf("%lf", &x);
    double y = 3 * x * x - 2 * x + 5;
    printf("y = 3x^2 - 2x + 5 = %.2f\n", y);
    return 0;
}