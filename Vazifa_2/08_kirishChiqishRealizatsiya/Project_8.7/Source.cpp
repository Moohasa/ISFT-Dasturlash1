//8.7.printf() yordamida natijalarni ustunli jadval shaklida chiroyli chiqarish.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    printf("| %-12s | %-10s |\n", "Mahsulot", "Narx");
    printf("|--------------|------------|\n");
    printf("| %-12s | %-10d |\n", "Olma", 12000);
    printf("| %-12s | %-10d |\n", "Banan", 15000);
    printf("| %-12s | %-10d |\n", "Apelsin", 18000);
    return 0;
}