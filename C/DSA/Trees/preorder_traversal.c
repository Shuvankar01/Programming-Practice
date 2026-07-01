#include <stdio.h>
#include <stdlib.h>

// Structure of Tree Node
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Create Node
struct Node* createNode(int value) {

    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Preorder Traversal
void preorder(struct Node *root) {

    if(root == NULL)
        return;

    printf("%d ", root->data);

    preorder(root->left);

    preorder(root->right);
}

int main() {

    /*
            50
           /  \
         30    70
        / \   / \
      20 40 60 80
    */

    struct Node *root = createNode(50);

    root->left = createNode(30);
    root->right = createNode(70);

    root->left->left = createNode(20);
    root->left->right = createNode(40);

    root->right->left = createNode(60);
    root->right->right = createNode(80);

    printf("Preorder Traversal:\n");

    preorder(root);

    printf("\n");

    return 0;
}