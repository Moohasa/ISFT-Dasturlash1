//5.5. Foydalanuvchidan kiritilgan sonni butun va kasr qismlarga ajratish dasturi.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> // floor uchun

int main() {
    double son;
    printf("Haqiqiy son kiriting: ");
    scanf("%lf", &son);

    long butun = (long)floor(son); 
    double kasr = son - butun;

    printf("Butun qism: %ld\n", butun);
    printf("Kasr qism: %.6f\n", kasr);
    return 0;
}