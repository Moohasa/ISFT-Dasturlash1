//2.4. Foydalanuvchidan ism va yosh so‘rab, ularni chiqarish dasturi.

#define _CRT_SECURE_NO_WARNINGS//vs uchun unsafe yoqish
#include <cstdio>
using namespace std;

int main() {
    char ism[50];
    int yosh;
    printf("Ismingiz: ");
    scanf("%49s", ism); // 49 — xavfsizlik (50 ta belgidan kam)
    printf("Yoshingiz: ");
    scanf("%d", &yosh);
    printf("Salom, %s! Siz %d yoshdasiz.\n", ism, yosh);
    return 0;
}