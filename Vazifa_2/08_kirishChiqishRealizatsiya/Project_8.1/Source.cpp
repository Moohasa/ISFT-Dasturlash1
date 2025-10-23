//8.1.Uchta qiymatni bitta scanf bilan kiritish va bitta printf bilan chiqarish.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b, c;
    printf("Uchta butun son kiriting : ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Kiritilgan sonlar: %d, %d, %d\n", a, b, c);
    return 0;
}