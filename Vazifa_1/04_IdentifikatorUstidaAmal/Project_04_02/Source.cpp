//4.2. Turli ma’lumot turlariga ega o‘zgaruvchilarni bir dasturda e’lon qilib, qiymat bering.
#include <iostream>
#include <string>
using namespace std;

int main() {
   
    bool tugri = true;
    char belgi = 'A';
    int son = 42;
    long uzun_son = 1000000L;
    float kasr1 = 3.14f;
    double aniq_kasr = 2.718281828;
    string matn = "Salom, dunyo!";

    cout << "bool: " << tugri << endl;
    cout << "char: " << belgi << endl;
    cout << "int: " << son << endl;
    cout << "long: " << uzun_son << endl;
    cout << "float: " << kasr1 << endl;
    cout << "double: " << aniq_kasr << endl;
    cout << "string: " << matn << endl;

    return 0;
}