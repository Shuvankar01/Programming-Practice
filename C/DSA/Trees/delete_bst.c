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

// Find minimum node
struct Node* findMin(struct Node *root) {

    while(root != NULL && root->left != NULL)
        root = root->left;

    return root;
}

// Delete node
struct Node* deleteNode(struct Node *root, int key) {

    if(root == NULL)
        return NULL;

    // Search the node
    if(key < root->data)
        root->left = deleteNode(root->left, key);

    else if(key > root->data)
        root->right = deleteNode(root->right, key);

    else {

        // Case 1: No child
        if(root->left == NULL && root->right == NULL) {

            free(root);
            return NULL;
        }

        // Case 2: One child (right)
        else if(root->left == NULL) {

            struct Node *temp = root->right;
            free(root);
            return temp;
        }

        // Case 2: One child (left)
        else if(root->right == NULL) {

            struct Node *temp = root->left;
            free(root);
            return temp;
        }

        // Case 3: Two children
        else {

            struct Node *temp = findMin(root->right);

            root->data = temp->data;

            root->right = deleteNode(root->right, temp->data);
        }
    }

    return root;
}

// Inorder Traversal
void inorder(struct Node *root) {

    if(root == NULL)
        return;

    inorder(root->left);

    printf("%d ", root->data);

    inorder(root->right);
}

int main() {

    struct Node *root = NULL;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    printf("Original BST:\n");
    inorder(root);

    int key;

    printf("\n\nEnter value to delete: ");
    scanf("%d", &key);

    root = deleteNode(root, key);

    printf("\nBST After Deletion:\n");
    inorder(root);

    printf("\n");

    return 0;
}