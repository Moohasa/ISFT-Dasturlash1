//1.6. Sonni turli formatlarda (%d, %x, %o) chiqarish dasturini yozing.   
#include <cstdio>
using namespace std;

int main() {
    int son = 255;
    printf("O'nlik: %d\n", son);      // 255
    printf("O'n oltilik: %x\n", son); // ff
    printf("Sakkizlik: %o\n", son);   // 377
    return 0;
}