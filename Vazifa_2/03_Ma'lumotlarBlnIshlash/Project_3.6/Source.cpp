//3.6. Butun sonni float turiga o‘tkazib, natijani formatlab chiqarish dasturi.

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main() {
    int butun;
    printf("Butun son kiriting: ");
    scanf("%d", &butun);

    float haqiqiy = (float)butun;
    printf("Butun: %d\n", butun);
    printf("Floatga o'tkazilgani: %.2f\n", haqiqiy);

    return 0;
}