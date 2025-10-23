//3.1.Butun, haqiqiy va belgili o‘zgaruvchilarni e’lon qilib, qiymat berish va chiqarish
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main() {
    int butun = 42;
    double haqiqiy = 3.14f;
    char belgi = 'X';

    printf("Butun: %d\n", butun);
    printf("Haqiqiy: %.2f\n", haqiqiy);
    printf("Belgi: %c\n", belgi);

    return 0;
}