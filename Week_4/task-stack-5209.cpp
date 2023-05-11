#include <iostream>
#include <cstring>
using namespace std;

const int MAX_STACK = 5;

struct Stack {
    int top;
    char data[MAX_STACK][50];// array 2 dimensi untuk menampung nama 
};
Stack stack;

void inisialisasi(){
    stack.top = -1;
};

void push(char data[]){
    if (stack.top < MAX_STACK - 1) {
        stack.top++;
        // strcpy = function menyalin string source ke dalam string target
        strcpy(stack.data[stack.top], data);
        cout << "Data " << data << " berhasil ditambahkan" << endl;
    } else {
        cout << "Stack sudah penuh" << endl;
    }
};

void pop(){
    if (stack.top >= 0) {
        cout << "Data " << stack.data[stack.top] << " berhasil dihapus" << endl;
        stack.top--;
    } else {
        cout << "Stack masih kosong" << endl;
    }
};

void clear(){
    stack.top = -1;
    cout << "Stack berhasil dikosongkan" << endl;
};

bool isEmpty(){
    return stack.top == -1;
};

bool isFull(){
    return stack.top == MAX_STACK - 1;
};

void print(){
    if (isEmpty()){
        cout << "Stack masih kosong" << endl;
    } else {
        cout << "Isi stack : " << endl;
        for (int i = stack.top; i >= 0; i--){
            cout << stack.data[i] << endl;
        }
    }
};

int main (){
    inisialisasi();
    char nama[50];
    int pilihanMenu;
    do {
        cout << "===== PILIHAN MENU STACK ======" << endl << endl;
        cout << "1. Menambahkan nama ke stack" << endl;
        cout << "2. Menghapus nama dari stack" << endl;
        cout << "3. Menampilkan nama dalam stack" << endl;
        cout << "4. Mengosongkan stack" << endl;
        cout << "5. Selesai" << endl;
        cout << "Masukkan pilihan anda : "; 
		cin >> pilihanMenu;
        cout << endl;
        switch(pilihanMenu){
            case 1 :
                if (isFull()){
                    cout << "Stack sudah penuh !!!" << endl;
                } else {
                    cin.ignore(); 
                    cout << "Masukan nama : ";
                    cin.getline(nama, 50);
                    push(nama);
                }
                break;
            case 2 :
                pop();
                break;
            case 3 :
                print();
                break;
            case 4 :
                clear();
                break;
        }
    } while (pilihanMenu != 5);

    cout << endl;
    system("pause");
    return 0;
}

