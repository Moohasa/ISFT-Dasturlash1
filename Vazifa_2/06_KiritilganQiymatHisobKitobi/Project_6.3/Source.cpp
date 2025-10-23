//6.3.Uchta son kiritilib, ularning eng kattasini topish.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double a, b, c;
    printf("Uchta son kiriting: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    double max = a;
    if (b > max) max = b;
    if (c > max) max = c;

    printf("Eng katta son: %.2f\n", max);
    return 0;
}