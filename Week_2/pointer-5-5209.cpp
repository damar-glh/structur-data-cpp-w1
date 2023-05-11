#include <iostream>
#include <cstring> // errors strcpy kalau tidak add library ini
using namespace std;

struct Mahasiswa {
	char npm[11];
	int nilai;
};

int main(){
	Mahasiswa mhs;
	
	strcpy(mhs.npm, "22.11.5209");
	mhs.nilai = 90;
	cout << "NPM = " << mhs.npm << ", nilai = " << mhs.nilai << endl;
	
	Mahasiswa *ptrMhs;
	ptrMhs = &mhs;
	strcpy(ptrMhs->npm, "22.11.5209");
	ptrMhs->nilai = 100;
	cout << "NPM = " << mhs.npm << ", nilai = " << mhs.nilai << endl;
	cout << "NPM = " << ptrMhs->npm << ", nilai = " << ptrMhs->nilai << endl;
	
	cout << endl;
	system ("pause");
	return 0;
}
