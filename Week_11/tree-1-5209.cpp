#include <iostream>
using namespace std;

typedef struct node {
    int data;
    node* left;
    node* right;
} Node;

Node* root = NULL;

void add(Node** root, int s) {
    if (*root == NULL) {
        *root = new Node;
        (*root)->data = s;
        (*root)->left = NULL;
        (*root)->right = NULL;
    } else if (s < (*root)->data) {
        add(&(*root)->left, s);
    } else if (s > (*root)->data) {
        add(&(*root)->right, s);
    } else if (s == (*root)->data) {
        cout << "Data already exists.\n";
    }
}

void preorder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";
        preorder(root->left);
        preorder(root->right);
    }
}

void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

void postorder(Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        cout << root->data << " ";
    }
}

int main() {
    // Testing the binary search tree

    // Adding nodes to the tree
    add(&root, 5);
    add(&root, 3);
    add(&root, 7);
    add(&root, 2);
    add(&root, 4);
    add(&root, 6);
    add(&root, 8);

    // Performing preorder traversal
    cout << "Preorder traversal: ";
    preorder(root);
    cout << endl;

    // Performing inorder traversal
    cout << "Inorder traversal: ";
    inorder(root);
    cout << endl;

    // Performing postorder traversal
    cout << "Postorder traversal: ";
    postorder(root);
    cout << endl;

    return 0;
}

