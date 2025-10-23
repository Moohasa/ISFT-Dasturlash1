////6.6.Ikki son o‘rtasidagi farqning mutlaq qiymatini(fabs) topish dasturi.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // fabs uchun

int main() {
    double a, b;
    printf("Ikki son kiriting: ");
    scanf("%lf %lf", &a, &b);
    double farq = fabs(a - b);
    printf("|%.2f - %.2f| = %.2f\n", a, b, farq);
    return 0;
}