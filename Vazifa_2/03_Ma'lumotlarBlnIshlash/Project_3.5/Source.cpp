//3.5.Belgini ASCII kodga, kodni esa belgiga o‘tkazuvchi dastur yozing.

#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main() {
    char belgi;
    int kod;

    printf("Belgini kiriting: ");
    scanf(" %c", &belgi); // bo'shliq — oldingi \n ni o'tkazib yuborish uchun

    printf("'%c' ning ASCII kodi: %d\n", belgi, belgi);

    printf("ASCII kodini kiriting: ");
    scanf("%d", &kod);

    if (kod >= 0 && kod <= 127) {
        printf("%d kodidagi belgi: '%c'\n", kod, (char)kod);
    }
    else {
        printf("Noto'g'ri ASCII kod.\n");
    }

    return 0;
}