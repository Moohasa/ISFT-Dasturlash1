//8.5.Bir nechta satrni gets() funksiyasi yordamida kiritish va chiqarish.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char matn[100];
    printf("Satr kiriting: ");
    fgets(matn, sizeof(matn), stdin);
    
    matn[strcspn(matn, "\n")] = 0;
    printf("Siz kiritdingiz: %s\n", matn);
    return 0;
}
//!!!izoh
//! VS da gets hotira buzuvchi(bufer overflowing) havfli funksiya bo'lgani uchun stdio dan 
//! topa olmayapdi gets funksiyasini, menimcha o'chirib tashlangan bo'lsa kerak
//! har holda CII o'chiradi degan gaplar yurgandi, hullas gets() ne opradelyon hatoligi berdi
//! shunga fgets funksiyasi bilan bajardim vazifani