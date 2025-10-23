//5.1. Sonni turli formatlarda chiqarish (%d, %x, %o).
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int son = 255;
    printf("O'nlik (%%d): %d\n", son);
    printf("O'n oltilik (%%x): %x\n", son);
    printf("Sakkizlik (%%o): %o\n", son);
    return 0;
}