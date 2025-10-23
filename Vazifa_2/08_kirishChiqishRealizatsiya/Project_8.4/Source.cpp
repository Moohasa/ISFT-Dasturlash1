//8.4. Bir necha qiymatni vergul bilan ajratib kiritish (scanf("%d,%d") misolida).
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int a, b;
    printf("Ikki sonni vergul bilan kiriting (masalan: 10,20): ");
    scanf("%d,%d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    return 0;
}