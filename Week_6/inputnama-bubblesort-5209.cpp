#include <iostream>
using namespace std;

void bubblesort(int n, string arr[]){
	int i, j;
	bool flag;
	for(i = 0; i < n; i++){
		flag = false;
		for (j = 0; j < n - 1; j++){
			if (arr[j] > arr[j+1]){
				swap(arr[j], arr[j+1]);
				flag = true;
			}
		}
	}
}

int main(){
	string arr[100];
	int n = sizeof(arr) / sizeof(int);
	cout << " Masukan banyak inputan data : ";
	
	cin >> n;
	for (int i = 0; i < n; i++ ){
		cout << " Input nama " << (i+1) << " : ";
		getline(cin, arr[i]);
	}
	
	bubblesort(n, arr);
	cout << " Data yang telah diurutkan Ascending sesuai abjad nama : ";
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	} return 0;
}
