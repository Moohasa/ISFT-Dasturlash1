//3.4. Haqiqiy sonlarni kiritib, ularning kvadrat ildizini topish (sqrt).

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cmath> // sqrt uchun
using namespace std;

int main() {
    double son;
    printf("Sonni kiriting: ");
    scanf("%lf", &son);

    if (son < 0) {
        printf("Manfiy sonning kvadrat ildizi mavjud emas.\n");
    }
    else {
        double ildiz = sqrt(son);
        printf("%.2f = %.4f\n", son, ildiz);
    }

    return 0;
}