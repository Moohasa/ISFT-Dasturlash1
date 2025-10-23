//8.2.Foydalanuvchidan ism, yosh, baho kiritilib, natija formatlangan jadvalda chiqarilsin.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    char ism[50];
    int yosh;
    float baho;
    printf("Ism, yosh, baho kiriting: ");
    scanf("%49s %d %f", ism, &yosh, &baho);
    printf("\n| %-10s | %-6s | %-6s |\n", "Ism", "Yosh", "Baho");
    printf("|------------|--------|--------|\n");
    printf("| %-10s | %-6d | %-6.1f |\n", ism, yosh, baho);
    return 0;
}