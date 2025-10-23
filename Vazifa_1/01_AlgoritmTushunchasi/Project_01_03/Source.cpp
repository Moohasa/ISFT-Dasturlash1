//1.3. Foydalanuvchidan ikki son kiritib, ularning yig‘indisini ekranga chiqaruvchi dastur tuzing.
#include <iostream>
using namespace std;

int main() {
	double a, b;//yoki int qilsa ham bo'ladi, men double qilib o'rganib qolganman-)
	cout << "Birinchi sonni kiriting: ";
	cin >> a;
	cout << "Ikkinchi sonni kiriting: ";
	cin >> b;
	cout << "Kiritgan sonlaringizni yig'indisi " << a + b << "ga teng" << endl;
	return 0;
}