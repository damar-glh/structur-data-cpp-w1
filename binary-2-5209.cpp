#include <iostream>
using namespace std;

int main(){
	int arr[10];
	int left, right, middle, temp, key, n;
	bool isktm = false;
	
	cout << "Masukkan jumlah data : "; cin >> n;
	
	for (int i = 0; i < n; i++){
		cout << "Angka ke - [" << i+1 << "] : "; cin >> arr[i];
	}
	for(int i = 0; i < n; i++){
		for (int j = 0; j < n - i - 1; j++){
			if (arr[j] > arr[j+1]){
				temp = arr[i];
				arr[j] = arr[j+1];
				arr[j + 1] = temp;
			}
		}
	}
	cout << "Data yang telah diurutkan adalah : ";
	for (int i = 0; i < n; i++){
		cout << arr[i] <<" ";
	}
	cout << "\nMasukan angka yang dicari : ";  cin >> key;
	left = 0;
	right = n -1;
	
	while (left <= right){
		middle = (left + right)/2;		
		if (key == arr[middle]){
			isktm = true;
			break;
		} else if (key < arr[middle]) {
			right = middle - 1;
		} else {
			left = middle + 1;
		}
	}
	if (isktm == true){
		cout << "Angka ditemukan pada index ke - " << middle;
	} else {
		cout << "Angka tidak ditemukan ";
	}
	
	return 0;
}

