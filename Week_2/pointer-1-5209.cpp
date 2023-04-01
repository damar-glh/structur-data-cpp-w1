#include <iostream>
using namespace std;

int main(){
	int x = 100, y;
	int *ptrX, *ptrY;
	
	ptrX = &x;
	ptrY = &x;
	
	cout << "Isi variabel x = " << x << " ada di alamat " << ptrX << endl;
	
	cout << "Isi variabel ptrX = " << ptrX << " sama dengan alamat " <<"<" << &x <<">" << endl ;
	cout << "Isi variabel ptrY = " << ptrY << " sama dengan alamat " <<"<" << &x <<">" << endl ;
	
	cout << "Nilai yang ditunjuk ptrX = " << x << " sama dengan nilai x " << *ptrX << endl;
	cout << "Nilai yang ditunjuk ptrY = " << *ptrY << " sama dengan nilai x " << *ptrX << endl;
}
