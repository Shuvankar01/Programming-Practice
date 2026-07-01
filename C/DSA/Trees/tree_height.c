#include <stdio.h>
#include <stdlib.h>

// Tree Node
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

// Find Maximum
int max(int a, int b) {

    if(a > b)
        return a;

    return b;
}

// Height Function
int height(struct Node *root) {

    if(root == NULL)
        return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return max(leftHeight, rightHeight) + 1;
}

int main() {

    struct Node *root = createNode(50);

    root->left = createNode(30);
    root->right = createNode(70);

    root->left->left = createNode(20);
    root->left->right = createNode(40);

    root->right->left = createNode(60);
    root->right->right = createNode(80);

    printf("Height of Tree = %d\n", height(root));

    return 0;
}