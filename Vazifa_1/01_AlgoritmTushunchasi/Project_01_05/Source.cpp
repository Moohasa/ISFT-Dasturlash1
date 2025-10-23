//1.5.Foydalanuvchidan son kiritib, u son musbat, manfiy yoki nol ekanini aniqlovchi algoritm yarating.
#include <iostream>
using namespace std;
int main() {
	double son;
	cout << "Sonni kiriting: ";
	cin >> son;

	if (son > 0) {
		cout << "kiritilgan son musbat" << endl;
	}
	else if (son < 0) {
		cout << "kiritilgan son manfiy" << endl;
	}
	else {
		cout << "Nol" << endl;
	}

	return 0;

}