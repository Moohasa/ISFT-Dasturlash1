//2.2. Foydalanuvchidan ikki son kiritib, ularning yig‘indisini hisoblash.
#define _CRT_SECURE_NO_WARNINGS//vs uchun unsafe yoqish
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    printf("Ikki butun son kiriting: ");
    scanf("%d %d", &a, &b);
    printf("Yig'indi: %d\n", a + b);
    return 0;
}