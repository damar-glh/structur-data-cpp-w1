#include <iostream>
using namespace std;

int main(){
	int a, b, temp;
	cout << " Nilai Variabel A dan B Sebelum ditukar : \n A = ";
	cin >> a;
	cout << " B = ";
	cin >> b;
	
	temp = a;
	a = b ;
	b = temp;
	
	cout << "\n Nilai Variabel A dan B Setelah ditukar: \n A = " 
	<< a << " \n B = " << b << endl;
	return 0;
}
