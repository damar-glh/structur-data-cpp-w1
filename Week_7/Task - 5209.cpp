#include <iostream>
#include <string>
using namespace std;

int main(){
	string names[100];
	string key, temp;
	int left, right, middle, n;
	bool isktm = false;
	
	cout << "Masukkan jumlah siswa dalam kelas : "; cin >> n;
	
	cin.ignore();
	for (int i = 0; i < n; i++){
		cout << "Masukkan nama siswa ke - [" << i+1 << "] : "; getline(cin, names[i]);
	}
	
	for(int i = 0; i < n; i++){
		for (int j = 0; j < n - i - 1; j++){
			if (names[j] > names[j+1]){
				temp = names[i];
				names[j] = names[j+1];
				names[j + 1] = temp;
			}
		}
	}
	cout << "\nDaftar nama siswa dalam kelas : \n";
	for (int i = 0; i < n; i++){
		cout << i+1 <<". " << names[i] << endl;
	}
	
	cout << "\nMasukan nama siswa yang dicari : ";  getline(cin, key);
	left = 0;
	right = n -1;
	
	while (left <= right){
		middle = (left + right)/2;		
		if (key == names[middle]){
			isktm = true;
			break;
		} else if (key < names[middle]) {
			right = middle - 1;
		} else {
			left = middle + 1;
		}
	}
	if (isktm == true){
		cout << "Nama " << key << " ditemukan pada index ke - " << middle;
	} else {
		cout << "Nama " << key << " tidak ditemukan ";
	}
	
	return 0;
}

