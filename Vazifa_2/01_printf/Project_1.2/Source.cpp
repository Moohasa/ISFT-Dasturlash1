//1.2.Foydalanuvchidan ism kiritilib, “Salom, [ism]!” ko‘rinishida chiqsin.
#define _CRT_SECURE_NO_WARNINGS//vs uchun unsafe yoqish
#include <cstdio>
using namespace std;

int main() {
    char ism[50];
    printf("Ismingiz: ");
    scanf("%49s", ism); // xavfsizlik uchun 49
    printf("Salom, %s!\n", ism);
    return 0;
}