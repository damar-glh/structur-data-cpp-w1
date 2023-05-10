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
		min_in = 1;
		for (j = i+1; j < n; j++){
			if (arr[j] < arr[min_in]){
				min_in = j;
			swap (arr[i], arr[min_in]);
			}
		}
	}
}

int main(){
	int arr[] = {20, 12, 10, 15, 2};
	int i, j, n, temp;
	n = sizeof(arr) / sizeof(int);
	cout << " Sebelum Array disorting : " ;
	print(arr, n);
	cout << endl;
	selectionSort(arr, n);
	cout << " Setelah Array disorting : ";
	print(arr, n);
	return(0);
}
