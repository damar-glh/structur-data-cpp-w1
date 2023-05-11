#include <iostream>
using namespace std;

int main(){
	int x = 100, y = 130, z; 
	int *ptrX, *ptrY; 
	
	cout << "niali x = " << x <<", y = " << y << endl;
	cout << "Alamat x = " << &x <<", y = " << &y << endl;

	ptrX = &x;
	cout << "Isi ptrX = " << ptrX <<" <alamat x> , " <<"nilai yang ditunjuk ptrX = " << *ptrX << endl;
	
	ptrY = &y; 
	cout << "Isi ptrY = " << ptrY <<" <alamat y> , " <<"nilai yang ditunjuk ptrX = " << *ptrY << endl;
	
	z = *ptrX;
	cout << "Nilai z  = " << z <<" sama dengan nilai x " <<"<"<<x<<">"<< endl;
	
	*ptrY = 70;
	cout << "Isi ptrY = " << ptrY <<" <tetap> , " <<"nilai y  = " << *ptrY << endl;
	
	*ptrX = *ptrY + 5;
	cout << "Isi ptrX = " << ptrX <<" <tetap> , " <<"nilai y  = " << *ptrX << endl;
	
	ptrX = ptrY;
	cout << "Isi ptrX = " << ptrX <<" <tetap> , " <<"dan ptrY = " << ptrY << endl;
	
	cout << "Nilai yang ditunjuk ptrX = " << *ptrX <<" dan ptrY = " << *ptrY;
}
