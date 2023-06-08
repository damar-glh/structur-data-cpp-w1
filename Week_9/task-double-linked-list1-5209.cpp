#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next, *prev;
};

Node *head, *tail, *print, *del, *newNode;

bool isEmpty() {
    return (head == NULL || tail == NULL);
}

void insertFront(int data) {
    newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (isEmpty()) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
}

void insertMid(int data) {
    newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (isEmpty()) {
        head = newNode;
        tail = newNode;
    } else if (head == tail) {
        tail = newNode;
        head->next = newNode;
        newNode->prev = head;
    } else {
        int pos;
        cout << " Masukkan posisi untuk menyisipkan: ";
        cin >> pos;
        print = head;
        int count = 1;
        while (print->next != NULL && count < pos) {
            print = print->next;
            count++;
        }
        newNode->next = print->next;
        if (print->next != NULL)
            print->next->prev = newNode;
        print->next = newNode;
        newNode->prev = print;
    }
}

void insertEnd(int data) {
    newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    if (isEmpty()) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
}

void deleteFromFront() {
    int simpan;
    if (head != NULL) {
        if (head->next != NULL) {
            del = head;
            simpan = head->data;
            cout << "\n " << simpan << " telah dihapus \n";
            head = head->next;
            head->prev = NULL;
            delete del;
        } else {
            simpan = head->data;
            cout << "\n " << simpan << " telah dihapus \n";
            head = NULL;
        }
    } else {
        cout << "\n Linked list kosong, penghapusan tidak dilakukan \n";
    }
}

void deleteFromMid() {
    if (head == NULL) {
        cout << "\n Linked list kosong, penghapusan tidak dilakukan \n";
        return;
    }
    int pos;
    cout << " Masukkan posisi yang ingin dihapus: ";
    cin >> pos;
    print = head;
    int count = 1;
    while (print != NULL && count < pos) {
        print = print->next;
        count++;
    }
    if (print == NULL) {
        cout << "\n Posisi tidak ditemukan \n";
        return;
    }
    del = print;
    if (print == head) {
        head = head->next;
        if (head != NULL)
            head->prev = NULL;
        if (head == NULL)
            tail = NULL;
    } else if (print == tail) {
        tail = tail->prev;
        if (tail != NULL)
            tail->next = NULL;
        if (tail == NULL)
            head = NULL;
    } else {
        print->prev->next = print->next;
        print->next->prev = print->prev;
    }
    delete del;
    cout << "\n Node di posisi " << pos << " telah dihapus \n";
}

void deleteFromEnd() {
    if (head == NULL) {
        cout << "\n Linked list kosong, penghapusan tidak dilakukan \n";
        return;
    }
    del = tail;
    if (head == tail) {
        head = NULL;
        tail = NULL;
    } else {
        tail = tail->prev;
        tail->next = NULL;
    }
    delete del;
    cout << "\n Node dari belakang telah dihapus \n";
}

void deleteAllNodes() {
    while (head != NULL) {
        del = head;
        head = head->next;
        delete del;
    }
    cout << "\n Semua Node telah dihapus \n";
}

void printNode() {
    print = head;
    if (head != NULL) {
        cout << " Isi Linked List: ";
        while (print != NULL) {
            cout << print->data << " <=> ";
            print = print->next;
        }
        cout << endl;
    } else {
        cout << "\n Tidak ada data dalam linked list\n";
    }
}


int main() {
    int choice, data;
menu:
    cout << "\n-----------------------------------\n";
    cout << " DOUBLE LINKED LIST NON CIRCULAR\n";
    cout << "-----------------------------------\n";
    cout << "Menu:\n";
    cout << " 1. Menambah Node dari depan\n";
    cout << " 2. Menambah Node dari tengah\n";
    cout << " 3. Menambah Node dari belakang\n";
    cout << " 4. Menghapus Node dari depan\n";
    cout << " 5. Menghapus Node dari tengah\n";
    cout << " 6. Menghapus Node dari belakang\n";
    cout << " 7. Menghapus semua Node\n";
    cout << " 8. Tampilkan Node\n";
    cout << " 9. Selesai\n";
    cout << "-----------------------------------\n";
    cout << " Masukan pilihan anda: ";
    cin >> choice;
    switch (choice) {
        case 1:
            cout << "Masukan data: ";
            cin >> data;
            insertFront(data);
            break;
        case 2:
            cout << "Masukan data: ";
            cin >> data;
            insertMid(data);
            break;
        case 3:
            cout << "Masukan data: ";
            cin >> data;
            insertEnd(data);
            break;
        case 4:
            deleteFromFront();
            break;
        case 5:
            deleteFromMid();
            break;
        case 6:
            deleteFromEnd();
            break;
        case 7:
            deleteAllNodes();
            break;
        case 8:
            printNode();
            break;
        case 9:
            return 0;
        default:
            cout << "Pilihan tidak tersedia!\n";
            goto menu;
    }
    goto menu;
}

