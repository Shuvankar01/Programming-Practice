#include <stdio.h>
#include <stdlib.h>

// Structure of a tree node
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a new node
struct Node* createNode(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Inorder Traversal
void inorder(struct Node *root) {

    if (root == NULL)
        return;

    inorder(root->left);

    printf("%d ", root->data);

    inorder(root->right);
}

int main() {

    /*
            10
           /  \
          20   30
         / \   / \
        40 50 60 70
    */

    struct Node *root = createNode(10);

    root->left = createNode(20);
    root->right = createNode(30);

    root->left->left = createNode(40);
    root->left->right = createNode(50);

    root->right->left = createNode(60);
    root->right->right = createNode(70);

    printf("Inorder Traversal:\n");

    inorder(root);

    printf("\n");

    return 0;
}