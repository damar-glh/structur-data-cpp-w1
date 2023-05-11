#include <iostream>
using namespace std;

int main(){
	int nilai[] = {20, 10, 40, 80, 70, 50, 30, 60, 100, 75, 85};
	
	int jumlahElementArray = sizeof(nilai)/ sizeof (int);
	
	cout << "Data nilai : \n";
	for (int index = 0; index < jumlahElementArray; index++){
		cout << nilai[index] << " ";
	}
	cout << endl;
	
	int find = 0;
	cout << "Masukkan nilai yang anda cari : "; cin >> find;

	bool isFind = false;
	int index;
	for (index = 0; index < jumlahElementArray; index++){
		if (find == nilai[index]){
			isFind = true;
			break;
		}
	}
	
	if (isFind){
		cout << "Data ditemukan pada index ke - " << index << endl;
	} else {
		cout << "Data tidak ditemukan \n";
	}
	
	return 0;
}

