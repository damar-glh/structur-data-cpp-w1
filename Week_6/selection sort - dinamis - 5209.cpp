#include <iostream>
using namespace std;

void print(int arr[], int n){
	for (int i; i < n; i++){
		cout << arr[i] << " ";
	}
}
void selectionSort(int arr[], int n){
	int i,j, min_in;
	for (i = 0; i < n; i++){
		min_in = i;
		for (j = i+1; j < n; j++){
			if (arr[j] < arr[min_in]){
				min_in = j;
			swap (arr[i], arr[min_in]);
			}
		}
	}
}

int main(){
	int arr[100];
	int i, j, n, temp;
	n = sizeof(arr) / sizeof(int);
	cout << " Masukan banyak inputan : ";
	cin >> n;
	for (int i = 0; i < n; i++ ){
		cout << " Input data " << (i+1) << " : "; 
		cin >> arr[i];
	}
	cout << " Sebelum Array disorting : " ;
	print(arr, n);
	cout << endl;
	selectionSort(arr, n);
	cout << " Setelah Array disorting : ";
	print(arr, n);
	return(0);
}
