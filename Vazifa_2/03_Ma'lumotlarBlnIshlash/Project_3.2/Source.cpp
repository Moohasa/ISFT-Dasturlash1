//3.2. Foydalanuvchidan ism (char), yosh (int) va o‘rtacha baho (float) kiritish dasturi.
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main() {
    char ism[50];
    int yosh;
    float baho;

    printf("Ism: ");
    scanf("%49s", ism);
    printf("Yosh: ");
    scanf("%d", &yosh);
    printf("O'rtacha baho: ");
    scanf("%f", &baho);

    printf("\n--- Ma'lumotlar ---\n");
    printf("Ism: %s\n", ism);
    printf("Yosh: %d\n", yosh);
    printf("Baho: %.2f\n", baho);

    return 0;
}