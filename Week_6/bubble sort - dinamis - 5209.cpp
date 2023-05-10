#include <iostream>
using namespace std;

void bubblesort(int n, int arr[]){
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
	int arr[100];
	int n = sizeof(arr) / sizeof(int);
	cout << " Masukan banyak inputan : ";
	cin >> n;
	for (int i = 0; i < n; i++ ){
		cout << " Input data " << (i+1) << " : "; 
		cin >> arr[i];
	}
	
	cout << " Sebelum Array disorting : ";
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	} cout << endl;
	
	bubblesort(n, arr);
	cout << " Setelah Array disorting : ";
	for (int i = 0; i < n; i++){
		cout << arr[i] << " ";
	} return 0;
}
