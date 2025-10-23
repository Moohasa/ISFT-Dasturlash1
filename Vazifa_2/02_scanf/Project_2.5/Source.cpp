//2.5. Bir butun, bir haqiqiy va bir belgili qiymatni birgalikda kiritish dasturi.
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main() {
    int butun;
    double haqiqiy;
    char belgi;

    printf("Butun son, haqiqiy son va belgi kiriting: ");
    scanf("%d %lf %c", &butun, &haqiqiy, &belgi);

    printf("Butun: %d\n", butun);
    printf("Haqiqiy: %.2f\n", haqiqiy);
    printf("Belgi: %c (ASCII: %d)\n", belgi, belgi);

    return 0;
}