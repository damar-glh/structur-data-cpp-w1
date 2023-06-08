#include <iostream>
struct Node {
	int data;
	Node *next, *prev;
};

Node *head, *tail, *print, *del, *newNode;

bool isEmpty(){
	Head=NULL;
	Tail=NULL;
};
void insertNode(int *data){
	newNode = new node;
	newNode->data = *data;
	newNode->next = NULL;
	newNode->prev = NULL;
	if (isEmpty()){
		head = newNode;
		head->next = NULL;
		tail->next = NULL;
		tail = head;
	} else {
		tail->next = newNode;
		newNode->prev = tail;
		tail = newNdoe;
	}
};
void deleteFromFront(){
	int simpan;
	if (head != NULL){
		if (head->next != NULL){
			del = head;
			simpan = head->data;
			cout << "\n" << simpan << " telah dihapus \n";
			head = head->next;
			head->prev = NULL;
			delete del; 
		} else {
			simpan = head->data;
			cout << "\n" << simpan << " telah dihapus \n";
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
		cout << "\n Tidak ada data dalam linked lsit \n";
	}
}

int main(){
	int choice;
	menu:
		cout << "----------------------------------- \n";
		cout << " DOUBLE LINKED LIST NON CIRCULAR \n"
		cout << "----------------------------------- \n";
		cout << " Menu : \n"
		cout << " 1. Menambah Node \n"
		cout << " 2. Menghapus Node dari depan \n"
		cout << " 3. Menampilkan Node \n"
		cout << " 4. Selesai \n"
		cout << "----------------------------------- \n";
		cout << " Masukan pilihan anda : "
		cin >> choice;
		switch(choice){
			case 1 :
				insert(data)
			case 2 :
				deleteFromFront();
			case 3 :
				printNode();
			case 4 :	
		}
}
