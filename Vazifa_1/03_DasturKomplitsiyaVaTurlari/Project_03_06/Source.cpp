//3.6. Kompilyator tomonidan hosil bo‘lgan .exe faylni bajarish natijasini tahlil qiling.
#include <iostream>
#include <fstream>
#include <string>  
using namespace std;

int main() {
    
    ofstream fayl("malumot.txt");
    fayl << "C++ loyihasi yaratilganda redaktor (masalan VS) exe yaratadi"
      <<  " masalan Project_03_06. exe kengaytmalai faylda kompyutorga o'zini tilida"
        <<" ma'lum buyrurqlar bo'aldi, uni aynan kompliyator kompyutor(mashina) tiliga"
        <<" tiliga o'girib yaratgan. dasturni papkadan exe kengaytmali faylni alohida ochib ishlatsa ham bo'ladi";
    fayl.close();

    ifstream oqish("malumot.txt");
    string qator;
    getline(oqish, qator); 
    cout << "Fayldan o'qildi: " << qator << endl;
    oqish.close();

    return 0;
}