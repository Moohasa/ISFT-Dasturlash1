//3.5. C++ da faylga yozish va undan o‘qishni amalga oshirib, kompilyatsiya farqini kuzating.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Faylga yozish
    ofstream fayl("malumot.txt");
    fayl << "Salom, fayl!";
    fayl.close();

    // Fayldan o'qish
    ifstream oqish("malumot.txt");
    string qator;
    getline(oqish, qator);
    cout << "Fayldan o'qildi: " << qator << endl;
    oqish.close();

    return 0;
}