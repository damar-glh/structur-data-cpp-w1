#include <iostream>
using namespace std;

struct Karyawan {
	int karyawanID;
	int umur;
	float gaji;
};

void inputDataKaryawan(Karyawan &karyawan){
	cout << "Inputan data karyawan" << endl;
	cout << "======================" << endl;
    cout << "ID   = " ;
    cin >> karyawan.karyawanID;
    cout << "Umur = ";
	cin >> karyawan.umur;
    cout << "Gaji = ";
	cin >> karyawan.gaji;
	cout << endl;
}

void cetakDataKaryawan(Karyawan &karyawan){
	cout <<"Data Karyawan" << endl;
	cout << "=====================" << endl;
	cout << "ID   = " << karyawan.karyawanID << endl;
    cout << "Umur = " << karyawan.umur << endl;
    cout << "Gaji = " << karyawan.gaji << endl << endl;
} 

float getTotalGaji(Karyawan karyawan1, Karyawan karyawan2){
	return karyawan1.gaji + karyawan2.gaji;
}

int main (){
	
	Karyawan joko, paijo;
	
	inputDataKaryawan(joko);
	inputDataKaryawan(paijo);
	
	cetakDataKaryawan(joko);
	cetakDataKaryawan(paijo);
	
	float totalGaji = getTotalGaji(joko, paijo);
	cout << "Total gaji joko dan paijo = " << totalGaji << endl;
	system("pause");
	return 0;
}
