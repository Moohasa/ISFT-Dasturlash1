//8.4.Jadval ko‘rinishida(ustunli) ma’lumotlarni chiroyli chiqarish.

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {
    cout << setw(10) << left << "Mahsulot  |" << setw(8) << right << "Narx    |" << endl;
    cout << "___________" << "________" << endl;
    cout << setw(10) << left << "Olma" <<  "|" <<setw(8)  << right << "12000" << endl;
    cout << setw(10) << left << "Banan" << "|" << setw(8) <<  right << "15000" << endl;
    cout << setw(10) << left << "Apelsin" << "|" << setw(8) <<  right << "18000" << endl;

    return 0;
}