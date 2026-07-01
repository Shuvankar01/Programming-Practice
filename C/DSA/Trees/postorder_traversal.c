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

// Postorder Traversal
void postorder(struct Node *root) {

    if(root == NULL)
        return;

    postorder(root->left);

    postorder(root->right);

    printf("%d ", root->data);
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

    printf("Postorder Traversal:\n");

    postorder(root);

    printf("\n");

    return 0;
}