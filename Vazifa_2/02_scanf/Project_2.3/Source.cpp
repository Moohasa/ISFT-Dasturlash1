//2.3. Uchta butun son kiritilib, ularning o‘rtacha qiymatini topish.
#define _CRT_SECURE_NO_WARNINGS//vs uchun unsafe yoqish
#include <cstdio>

using namespace std;

int main() {
    int a, b, c;
    printf("Uchta butun son kiriting: ");
    scanf("%d %d %d", &a, &b, &c);
    double ortacha = (a + b + c) / 3.0; // 3.0 — haqiqiy bo'lishi uchun
    printf("O'rtacha: %.2f\n", ortacha);
    return 0;
}