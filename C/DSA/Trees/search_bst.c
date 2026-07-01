#include <stdio.h>
#include <stdlib.h>

// Structure of BST Node
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Create a new node
struct Node* createNode(int value) {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Insert into BST
struct Node* insert(struct Node *root, int value) {

    if(root == NULL)
        return createNode(value);

    if(value < root->data)
        root->left = insert(root->left, value);

    else if(value > root->data)
        root->right = insert(root->right, value);

    return root;
}

// Search in BST
struct Node* search(struct Node *root, int key) {

    if(root == NULL || root->data == key)
        return root;

    if(key < root->data)
        return search(root->left, key);

    return search(root->right, key);
}

int main() {

    struct Node *root = NULL;
    struct Node *result;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    int key;

    printf("Enter value to search: ");
    scanf("%d", &key);

    result = search(root, key);

    if(result != NULL)
        printf("%d found in the BST.\n", key);
    else
        printf("%d not found in the BST.\n", key);

    return 0;
}