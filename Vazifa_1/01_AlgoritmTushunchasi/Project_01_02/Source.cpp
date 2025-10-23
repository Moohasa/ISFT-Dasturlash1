//1.2.Foydalanuvchi ismini kiritib, unga “Salom, [ism]!” deb murojaat qiluvchi dastur yozing
#include <iostream>
#include <string>
using namespace std;
int main() {
	string ism;
	cout << "Ismingizni kiriting";
	getline(cin, ism);
	cout << "Salom  " << ism << "!" << endl;
	return 0;

}