//3.3. Belgilar ustida arifmetik amal bajarish (masalan, 'A'+1 natijasini topish).
#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
using namespace std;

int main() {
    char b = 'A';
    int natija = b + 1;        // 'A' = 65 → 66
    char yangi_belgi = b + 1;  // 66 = 'B'

    printf("'%c' + 1 = %d (ASCII) = '%c'\n", b, natija, yangi_belgi);

    return 0;
}