#include <iostream>
using namespace std;
struct Node {
	int data;
	Node *next, *prev;
};

Node *head = NULL, *tail = NULL, *print = NULL, *del = NULL, *newNode = NULL;

bool isEmpty(){
	return (head == NULL || tail == NULL);
};
void insertNode(int data){
	newNode = new Node;
	newNode->data = data;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (isEmpty() == 1){
		head = newNode;
		newNode->next = NULL;
		newNode->prev = NULL;
		tail = head;
	} else {
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNode;
	}
};
void deleteFromFront(){
	int simpan;
	if (head != NULL){
		if (head->next != NULL){
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
		cout << "\n Linked list kosonh penghapusan tidak dilakukan \n";
	}
};
void printNode(){
	print = head;
	if(head != NULL){
		cout << " Isi Linked List  : ";
		while(print != NULL){
			cout << print->data << "<= =>";
			print = print->next;
		}
	}  else {
		cout << "\n Tidak ada data dalam linked list \n";
	}
}

int main(){
	int choice, data;
	menu:
		cout << "\n----------------------------------- \n";
		cout << " DOUBLE LINKED LIST NON CIRCULAR \n";
		cout << "----------------------------------- \n";
		cout << " Menu : \n";
		cout << " 1. Menambah Node \n";
		cout << " 2. Menghapus Node dari depan \n";
		cout << " 3. Menampilkan Node \n";
		cout << " 4. Selesai \n";
		cout << "----------------------------------- \n";
		cout << " Masukan pilihan anda : ";
		cin >> choice;
		switch(choice){
			case 1 :
				cout << " Masukan data : ";
				cin >> data;
				insertNode(data);
				break;
			case 2 :
				deleteFromFront();
				break;
			case 3 :
				printNode();
				break;
			case 4 :
			    return 0;
				break;
			default :
			    cout << " Pilihan tidak tersedia !!!!";
				goto menu;	
		}
	goto menu;
}
