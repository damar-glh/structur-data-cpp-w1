#include <iostream>
using namespace std;

void printArray(int arr[], int n){
	for (int i; i < n; i++){
		cout << arr[i] << " ";
	}
}
void insertionSort(int arr[], int n){
	for (int i = 1; i < n; i++){
		int key = arr[i];
		int j = i - 1;
		while (key < arr[j] && j >= 0){
			arr[j + 1] = arr[j];
			--j;
		}
		arr[j + 1] = key;
	}
}

int main(){
	int arr[] = {9, 5, 1, 4, 3};
	int i, j, n, temp;
	n = sizeof(arr) / sizeof(int);
	cout << " Sebelum Array disorting : " ;
	printArray(arr, n);
	cout << endl;
	insertionSort(arr, n);
	cout << " Setelah Array disorting : ";
	printArray(arr, n);
	return(0);
}
