//2.6.Foydalanuvchidan radiusni kiritib, aylana uzunligini hisoblash
#define  _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#define PI 3.14159
using namespace std;

int main() {
    double radius;
    printf("Radiusni kiriting: ");
    scanf("%lf", &radius);

    if (radius < 0) {
        printf("Radius manfiy bo'lishi mumkin emas!\n");
        return 1;
    }

    double uzunlik = 2 * PI * radius;
    printf("Aylana uzunligi: %.2f\n", uzunlik);
    return 0;
}