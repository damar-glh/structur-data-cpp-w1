#include <iostream>
using namespace std;

int main(){
	int nilai[100], sum;
	
	cout << "Jumlah nilai yang ingin diinputkan : "; cin >> sum;
	cout << endl;
	
	cout << "Masukan nilai [1 - 100] : \n\n";
	for (int a = 0; a < sum; a++){
		cout << "Nilai ke " << a+1 << " = "; cin >> nilai[a];
	}
	cout << endl;

	int find = 0;
	cout << "Masukkan nilai yang anda cari : "; cin >> find;

	bool isFind = false;
	int index;
	for (index = 0; index < sum; index++){
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

