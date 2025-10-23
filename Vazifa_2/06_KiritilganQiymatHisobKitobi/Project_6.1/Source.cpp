//6.1.Foydalanuvchidan ikki son kiritilib, ularning yig‘indisi topilsin.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double a, b;
    printf("Ikki son kiriting: ");
    scanf("%lf %lf", &a, &b);
    printf("Yig'indi: %.2f\n", a + b);
    return 0;
}