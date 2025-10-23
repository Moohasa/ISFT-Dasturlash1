//3.3. Oddiy matematik formulani (masalan, a+ba+ba+b) yozib, kompilyatsiya jarayonini tahlil qiling.
#include <iostream>
using namespace std;

int main() {
    int a = 5, b = 3;
    int natija = a + 2  * a * b + b; 
    // ikki o'zgaruvchi yaratiladi, a va b, 5 va 3 qiymat berdim
    // ba + ba ni qisqartirib 2 * a * b qilib oldim: natija 38 chiqishi kerak
    cout << "Natija: " << natija << endl;
    return 0;
}