#include <iostream>
#include <string>
using namespace std;

int main(){
    string names[5] = {"Damar Galih", "Ahmad Nugroho", "Gilang Hidayat", "Salam Albaroq", "Ridwan Kamil"};
    int n = 5;
    string key;
    bool isFound = false;

    cout << "Daftar Nama Siswa : " << endl;
    for (int i = 0; i < n; i++){
        cout << i+1 << ". " << names[i] << endl;
    }

    cout << "\nMasukkan nama yang ingin dicari : "; getline(cin, key);

    for (int i = 0; i < n; i++){
        if (key == names[i]){
            isFound = true;
            cout << "Nama " << key << " ditemukan pada indeks ke-" << i+1 << endl;
            break;
        }
    }

    if (!isFound){
        cout << "Nama " << key << " tidak ditemukan." << endl;
    }

    return 0;
}

