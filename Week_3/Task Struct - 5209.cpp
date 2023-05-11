#include <iostream>
using namespace std;

struct Mahasiswa
{
char npm[11];
string nama;
string alamat;
float ipk;
int tahunMasuk;
};

int main()
{ // input jumlah mahasiswa
int jumlahMahasiswa;
cout << "Jumlah mahasiswa yang ingin diinputkan : "; cin >> jumlahMahasiswa;
cout << endl;
// deklarsi variabel array mhs dg tipe struct Mahasiswa
Mahasiswa mhs[jumlahMahasiswa];

// input data mahasiswa
for (int i = 0; i < jumlahMahasiswa; i++)
{
cout << "Data Mahasiswa ke #" << (i+1) << endl;
cout << " NPM         : "; 
cin >> mhs[i].npm;
cout << " Nama        : "; 
cin.ignore();
getline(cin,mhs[i].nama); 
cout << " Tahun Masuk : ";
cin >> mhs[i].tahunMasuk;
cout << " Alamat      : "; 
cin.ignore();
getline(cin,mhs[i].alamat);
cout << " IPK         : "; 
cin >> mhs[i].ipk;
cout << endl;
}

cout << endl;
// menampilkan data mahasiswa yg sudah diinputkan
cout << "Laporan Data Mahasiswa" << endl;
cout << "======================" << endl;

for (int i = 0; i < jumlahMahasiswa; i++)
{
cout << "No. #" << (i+1) << endl;
cout << " NPM         : " << mhs[i].npm << endl;
cout << " Nama        : " << mhs[i].nama << endl;
cout << " Tahun Masuk : " << mhs[i].tahunMasuk << endl;
cout << " Alamat      : " << mhs[i].alamat << endl;
cout << " IPK         : " << mhs[i].ipk << endl;
cout << endl << endl;
}

system("pause");
return 0;
}
