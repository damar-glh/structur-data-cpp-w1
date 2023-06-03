#include <iostream>
using namespace std;

struct Node {
    string data;
    Node* next;
};

Node* headNode = NULL;
Node* currentNode = NULL;

bool isEmpty() {
    return (headNode == NULL);
}

void insertNode(string data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = NULL;

    if (isEmpty()) {
        headNode = newNode;
        currentNode = newNode;
    }
    else {
        currentNode->next = newNode;
        currentNode = newNode;
    }

    cout << "List berhasil ditambahkan" << endl;
}

void deleteFromFront() {
    if (!isEmpty()) {
        Node* temp = headNode;
        headNode = headNode->next;
        delete temp;

        cout << "Node berhasil dihapus" << endl;
    }
    else {
        cout << "List masih kosong" << endl;
    }
}

void deleteFromEnd() {
    if (!isEmpty()) {
        if (headNode == currentNode) {
            delete headNode;
            headNode = NULL;
            currentNode = NULL;
        }
        else {
            Node* temp = headNode;
            while (temp->next != currentNode) {
                temp = temp->next;
            }

            delete currentNode;
            currentNode = temp;
            currentNode->next = NULL;
        }

        cout << "Node berhasil dihapus" << endl;
    }
    else {
        cout << "List masih kosong" << endl;
    }
}

void deleteAll() {
    if (!isEmpty()) {
        Node* temp = headNode;
        while (temp != NULL) {
            headNode = headNode->next;
            delete temp;
            temp = headNode;
        }

        currentNode = NULL;
        cout << "Semua node berhasil dihapus" << endl;
    }
    else {
        cout << "List masih kosong" << endl;
    }
}

void printNode() {
    if (!isEmpty()) {
        int i = 1;
        Node* temp = headNode;
        while (temp != NULL) {
            cout << "Data pada node #" << i << " = " << temp->data << endl;
            temp = temp->next;
            i++;
        }
    }
    else {
        cout << "List masih kosong" << endl;
    }
}

int main() {
    int choice, sum;
    string input;
    menu:
    cout << ">>> PILIHAN MENU SINGLY LINKED LIST <<<" << endl;
    cout << "1. Menambah Node" << endl;
    cout << "2. Menghapus Node dari Depan" << endl;
    cout << "3. Menghapus Node dari Belakang" << endl;
    cout << "4. Mengosongkan Node" << endl;
    cout << "5. Menampilkan Node" << endl;
    cout << "6. Selesai" << endl;

    cout << "Masukkan pilihan anda: ";
    cin >> choice;

    cin.ignore();
    switch (choice) {
    case 1:
    	system("cls");
        cout << "Masukkan data: ";
        getline(cin, input);
        insertNode(input);
        goto menu;
        break;
    case 2:
    	system("cls");
        deleteFromFront();
        goto menu;
		break;
    case 3:
    	system("cls");
        deleteFromEnd();
        goto menu;
        break;
    case 4:
    	system("cls");
        deleteAll();
        goto menu;
        break;
    case 5:
        printNode();
        break;
    case 6:
    	system("cls");
    	break;
    default:
    	cout << "Menu yang anda pilih tidak terdaftar !!!!" << endl;
    }
}
