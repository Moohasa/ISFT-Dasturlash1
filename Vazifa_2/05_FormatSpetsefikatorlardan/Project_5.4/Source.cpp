//5.4. printf() yordamida matnni chap va o‘ngga hizalash (%-10s, %10s).
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    printf("Chapga: '%-12s'\n", "Salom");   
    printf("O'ngga: '%12s'\n", "Dunyo");    
    return 0;
}