#include <iostream>
using namespace std;

typedef struct {
	int tahun, bulan, tanggal;
} data_tunggal;
data_tunggal tanggal_lahir;

int main(int argc, char *argv[]){
	tanggal_lahir.tanggal = 23;
	tanggal_lahir.bulan = 05;
	tanggal_lahir.tahun = 1986;
	
	cout << tanggal_lahir.tanggal <<"/";
	cout << tanggal_lahir.bulan <<"/";
	cout << tanggal_lahir.tahun <<"/";
	
	system("pause");
	return 0;
}
