#include <iostream>
using namespace std;

struct node {
    char data;
    node *left;
    node *right;
};

node *root = NULL;

void addNode(node **root, char isi) {
    if ((*root) == NULL) {
        node *baru;
        baru = new node;
        baru->data = isi;
        baru->left = NULL;
        baru->right = NULL;
        (*root) = baru;
    }
}

void printTree(node* root, string space, string type) {
    if (root == NULL) {
        return;
    }

    string spaceIncrement = "    ";

    if (type == "right") {
        printTree(root->right, space + spaceIncrement, "right");
    }

    cout << space << root->data << endl;

    if (type != "left") {
        printTree(root->left, space + spaceIncrement, "left");
    }
}

int main() {
    char isinya;
    cout << "\n         Posisi awal binary tree :   \n\n";

    // level 0
    addNode(&root, isinya = 'A');
    // level 1
    addNode(&root->left, isinya = 'M');
    addNode(&root->right, isinya = 'I');
    // level 2
    addNode(&root->left->left, isinya = 'K');
    addNode(&root->right->left, isinya = 'J');
    addNode(&root->right->right, isinya = 'Z');
    // level 3
    addNode(&root->left->left->left, isinya = 'O');
    addNode(&root->left->left->right, isinya = 'M');
    // level 4
    addNode(&root->left->left->left->left, isinya = 'Y');
    addNode(&root->left->left->left->right, isinya = 'K');

    cout << "\n Output tree:\n\n";
    printTree(root, "", "");

    return 0;
}

