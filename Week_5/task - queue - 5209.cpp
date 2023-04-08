#include <iostream>
using namespace std;

const int MAX_QUEUE = 5;

struct Queue {
    int depan, belakang;
    int data[MAX_QUEUE];
}; Queue queue;

void inisialisasi(){
    queue.depan = queue.belakang = -1;
};

bool isEmpty(){
    return queue.belakang == -1;
};

bool isFull(){
    return (queue.belakang >=(MAX_QUEUE - 1));
};

void antrianDepan(int no){
	if (isEmpty()){
		queue.depan = queue.belakang = 0;
	} else {
		queue.belakang ++;
	}
	queue.data[queue.belakang] = no;
}

void antrianBelakang(){
	if (isEmpty()){
		cout << "Antrian sudah kosong !!! ";
	} else {
		for (int a = queue.depan; a < queue.belakang; a++){
			queue.data[a] = queue.data [a+1];
		}
		queue.belakang--;
		if (queue.belakang == -1){
			queue.depan = -1;
		}
	}
} 

void clear(){
    queue.depan = queue.belakang = -1;
    cout << " Antrian berhasil dikosongkan" << endl;
};

void print(){
	cout << "No. antrian yang dipanggil secara urut : " << endl;
	for (int a = queue.depan; a <= queue.belakang; a++){
		cout << "No. Antrian   : ";
		cout << queue.data[a];
		cout << endl;
	}
};

int main (){
    inisialisasi();
    int data, urutan, u = 1;
    int pilihanMenu;
    do {
        cout << "===== SYSTEM ANTRIAN ======" << endl << endl;
        cout << "|1. Menambahkan Antrian" << endl;
        cout << "|2. Panggilkan Antrian" << endl;
        cout << "|3. Menampilkan Semua Daftar Antrian" << endl;
        cout << "|4. Hapus Semua Daftar Antrian" << endl;
        cout << "|5. Keluar Sistem" << endl << endl;;
        cout << "Masukkan no pilihan anda : "; 
		cin >> pilihanMenu;

        switch(pilihanMenu){
            case 1 :
            	 if(isFull()) {
                cout<<"Antrian sedang penuh, Mohon Tunggu !!! " << endl;
            }
            else{
                urutan = u;
                antrianDepan(urutan);
                cout << "No. Antrian           : ";
                cout << u << endl;
                cout << "Antrian yang menunggu : ";
                cout << queue.belakang << endl;
                u++;
            }
                break;
                
            case 2 :
            	if (isEmpty()){
            		cout<<"Antrian sedang penuh, Mohon Tunggu !!! " << endl;
				} else {
                    cout << "No. Antrian : ";
                    cout <<  queue.data[queue.depan] << endl;
					antrianBelakang();
                    cout << "Silahkan! Anda Dipanggil !" << endl;
				}
                break;
                
            case 3 :
            	if (isEmpty()){
            		cout<<"Antrian masih kosong , Mohon Tambah Antrian !!! " << endl;
				} else {
                    print();
				}
                break;
                
            case 4 :
                if (isEmpty()){
            		cout<<"Antrian masih kosong , Mohon Tambah Antrian !!! " << endl;
				} else {
				clear();
				}
                break;
                
            case 5 :
            	cout << "Terima kasih !!!" << endl;
            	exit(0);
            default :
            	cout << "Menu yang anda pilih tidak terdaftar !!!" << endl;
            	break;
        }
    } while (pilihanMenu != 5);

    cout << endl;
    system("pause");
    return 0;
}

