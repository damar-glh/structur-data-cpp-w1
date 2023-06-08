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

void insertFront(int data){
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

void insertMid(int data){
	
};

void insertEnd(int data){
	
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

void deleteFromMid(){
	
};

void deleteFromEnd(){
	
}

void printNode(){
	print = head;
	if(head != NULL){
		cout << " Isi Linked List  : ";
		while(print != NULL){
			cout << print->data << "<=>";
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
		cout << " 1. Insert Node From Front \n";
		cout << " 2. Insert Node From Mid \n";
		cout << " 3. Insert Node From End \n";
		cout << " 4. Delete Node From Front \n";
		cout << " 5. Delete Node From Mid \n";
		cout << " 6. Delete Node From End \n";
		cout << " 7. Printf Node \n";
		cout << " 8. Finish \n";
		cout << "----------------------------------- \n";
		cout << " Enter your choice : ";
		cin >> choice;
		switch(choice){
			case 1 :
				cout << " Enter your data : ";
				cin >> data;
				insertFront(data);
				break;
			case 4 :
				deleteFromFront();
				break;
			case 7 :
				printNode();
				break;
			case 8 :
			    return 0;
				break;
			default :
			    cout << " Pilihan tidak tersedia !!!!";
				goto menu;	
		}
	goto menu;
}
