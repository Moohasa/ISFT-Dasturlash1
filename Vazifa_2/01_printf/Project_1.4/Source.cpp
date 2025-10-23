//1.4.Bir nechta qiymatlarni sarlavha bilan jadval tarzida chiqarish.

#include <cstdio>
using namespace std;

int main() {
    printf("%-10s %-1s %-8s %-1s %-8s\n", "Mahsulot","|", "Narx", "|", "Miqdor");
    printf("________________________________\n");
    printf("%-10s %-1s %-8d %-1s %-8d\n", "Olma", "|", 12000,"|", 5);
    printf("%-10s %-1s %-8d %-1s %-8d\n", "Banan","|", 15000,"|", 3);
    return 0;
}