#include <iostream>
using namespace std;

const int MAX_QUEUE = 5;

struct Queue {
    int depan, belakang;
    int data[MAX_QUEUE];
};
Queue queue;

void inisialisasi(){
    queue.depan = queue.belakang = -1;
};

void enqueue(int data){
	queue.depan = 0;
	queue.belakang++;
	queue.data[queue.belakang] =data;
	cout << " Data berhasil ditambahkan " << endl;
};

void dequeue(){
    cout << " Data "<< queue.data[queue.depan] << " sudah dihapus " << endl;
    for (int i = queue.depan; i <= queue.belakang; i++){
    	queue.data[i] = queue.data[i + 1];
	}
	queue.belakang--;
};


void clear(){
    queue.depan = queue.belakang = -1;
    cout << " Queue berhasil dikosongkan" << endl;
};

bool isEmpty(){
    return queue.belakang == -1;
};

bool isFull(){
    return (queue.belakang >=(MAX_QUEUE - 1));
};

void print(){
    cout << " Isi queue : ";
    for (int i = queue.depan; i <= queue.belakang; i++){
    	cout << queue.data[i];
	}
	cout << endl;
};

int main (){
    inisialisasi();
    int data;
    int pilihanMenu;
    do {
        cout << "===== PILIHAN MENU QUEUE ======" << endl << endl;
        cout << "1. Menambahkan item queue" << endl;
        cout << "2. Menghapus item queue" << endl;
        cout << "3. Menampilkan item queue" << endl;
        cout << "4. Mengosongkan queue" << endl;
        cout << "5. Selesai" << endl;
        cout << "Masukkan pilihan anda : "; 
		cin >> pilihanMenu;
        cout << endl;
        switch(pilihanMenu){
            case 1 :
                if (isFull()){
                    cout << "Queue sudah penuh !!!" << endl;
                } else {
                    cin.ignore(); 
                    cout << "Masukan data : ";
                    cin >> data;
                    enqueue(data);
                }
                break;
            case 2 :
                dequeue();
                break;
            case 3 :
                print();
                break;
            case 4 :
                clear();
                break;
            case 5 :
            	cout << "terima kasih !!!" << endl;
            default :
            	cout << "Menu yang anda pilih tidak terdaftar !!!" << endl;
            	break;
        }
    } while (pilihanMenu != 5);

    cout << endl;
    system("pause");
    return 0;
}

