//5.6. printf() orqali ustunli jadval ko‘rinishida natija chiqarish. 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    printf("%-1s %-10s %-1s %-8s %-1s %-8s\n", "|","Mahsulot", "|", "Narx", "|", "Miqdor");
    printf("___________________________________\n");
    printf("%-1s %-10s %-1s %-8d %-1s %-8d\n", "|", "Olma", "|", 12000, "|", 5);
    printf("%-1s %-10s %-1s %-8d %-1s %-8d\n", "|", "Banan", "|", 15000, "|", 3);
    printf("%-1s %-10s %-1s %-8d %-1s %-8d\n", "|", "Apelsin", "|", 18000, "|", 2);
    return 0;
}