#include <iostream>
using namespace std;

int main(){
	char kampus[] = "STMIK AMIKOM";
	
	int length = sizeof(kampus) / sizeof (char);
	
	for (int i =0; i < length; i++){
		cout << kampus[i];
	}	
	cout << " Jika dibalik menjadi ";
	
	char *ptr = &kampus[length - 1]; // pointer menunjuk ke elemen terakhir

    for (int i = 0; i < length; i++) {
        cout << *ptr; // cetak nilai dari setiap elemen yang ditunjuk oleh pointer
        ptr--; // pindahkan pointer ke elemen sebelumnya
    }
	cout << endl;
	system ("pause");
	return 0;
}
