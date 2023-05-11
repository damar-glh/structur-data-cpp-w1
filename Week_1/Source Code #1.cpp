#include <iostream>
using namespace std;

void cetakElemenArray(int array[], int jumlahElemenArray) {
    for (int i = 0; i < jumlahElemenArray; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int getNilaiTerbesar(int array[], int jumlahElemenArray) {
    int nilaiTerbesar = array[0];
    for (int i = 1; i < jumlahElemenArray; i++) {
        if (nilaiTerbesar < array[i]) {
            nilaiTerbesar = array[i];
        }
    }
    return nilaiTerbesar;
}

int getNilaiTerkecil(int array[], int jumlahElemenArray) {
    int nilaiTerkecil = array[0];
    for (int i = 1; i < jumlahElemenArray; i++) {
        if (nilaiTerkecil > array[i]) {
            nilaiTerkecil = array[i];
        }
    }
    return nilaiTerkecil;
}

int main() {
    int jumlahArray, nilaiArray[100];
    
    cout << "Input jumlah array: ";
    cin >> jumlahArray;
    cout << endl; 
    
    for (int i = 0; i < jumlahArray; i++) {
    cout << "Array Ke " << (i+1) << " = ";
    cin >> nilaiArray[i];
    }
    
    cout << "\nDaftar Array :";
    cetakElemenArray(nilaiArray, jumlahArray);
    
    int nilaiTerbesar = getNilaiTerbesar(nilaiArray, jumlahArray);
    int nilaiTerkecil = getNilaiTerkecil(nilaiArray, jumlahArray);

    cout << "\nNilai terbesar adalah : " << nilaiTerbesar << endl;
    cout << "\nNilai terkecil adalah : " << nilaiTerkecil << endl;
    system("pause");
    return 0;
}

