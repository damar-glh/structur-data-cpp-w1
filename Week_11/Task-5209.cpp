#include <iostream>
using namespace std;

struct node {
    char data;
    node* left;
    node* right;
};

node* createNode(char isi) {
    node* newNode = new node;
    newNode->data = isi;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

void addNode(node** root, char isi) {
    if ((*root) == NULL) {
        node* baru = createNode(isi);
        (*root) = baru;
    }
}

void preorder(node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void postorder(node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

void printTree(node* root, int space) {
	if (root == NULL){
		return;
	}
	space += 5;
	printTree(root->right, space);
	cout << endl;
	for (int i = 5; i < space; i++){
		cout << " ";
	}
	cout << "|";
	for (int i = 0; i < 3; i++){
		cout << "-";
	}
	cout << root->data;
	printTree(root->left, space);
}


int main() {
    node* root = NULL;

    // level 0
    addNode(&root, 'A');
    // level 1
    addNode(&root->left, 'M');
    addNode(&root->right, 'I');
    // level 2
    addNode(&root->left->left, 'K');
    addNode(&root->right->left, 'J');
    addNode(&root->right->right, 'Z');
    // level 3
    addNode(&root->left->left->left, 'O');
    addNode(&root->left->left->right, 'M');
    // level 4
    addNode(&root->left->left->left->left, 'Y');
    addNode(&root->left->left->left->right, 'K');
    
    
    cout << " \t Posisi Awal Binary Tree : \n\n";
	cout << " Output Horizontal :";
    printTree(root, 0);
    cout << "\n\n Output Vertikal :\n";
    cout << "             A" << endl;
    cout << "            / \\" << endl;
    cout << "           M   I" << endl;
    cout << "          /   / \\" << endl;
    cout << "         K   J   Z" << endl;
    cout << "        / \\" << endl;
    cout << "       O   M" << endl;
    cout << "      / \\" << endl;
    cout << "     Y   K" << endl; 
    
    printf("\n Preorder  : "); preorder(root);
	printf("\n Inorder   : "); inorder(root);
	printf("\n Postorder : "); postorder(root);

    return 0;
}

