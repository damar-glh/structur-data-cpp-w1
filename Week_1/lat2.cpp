#include <iostream>
using namespace std;

int main(){
	string nama[100], Mk[100];
	int nilai[100];
	int jml;
	
	cout << " Masukan jumlah mahasiswa : ";
	cin >> jml;
	
	for (int i = 1; i <= jml; i ++){
	cout << " Masukan nama mahasiswa  : ";
	cin.ignore();
	getline(cin, nama[i]);
	cout << " Masukan matakuliah      : ";
	getline(cin, Mk[i]);
	cout << " Masukan nilai mahasiswa : ";
	cin >> nilai[i];
	}
	
	for (int i = 1; i <= jml; i ++){
	cout <<" Tampilkan data : " << endl;
	cout <<" Nama           : " << nama[i] << endl;
	cout <<" Mata Kuliah    : " << Mk[i] << endl;
	cout <<" Nilai Kuliah   : " << nilai[i] << endl;
	}
	
	return 0;
}
