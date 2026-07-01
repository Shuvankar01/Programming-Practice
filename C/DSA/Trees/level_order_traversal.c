#include <stdio.h>
#include <stdlib.h>

#define MAX 100

// Tree Node
struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

// Queue
struct Node *queue[MAX];
int front = 0;
int rear = -1;

// Create Node
struct Node* createNode(int value) {

    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

// Enqueue
void enqueue(struct Node *node) {

    if(rear == MAX - 1) {
        printf("Queue Overflow\n");
        return;
    }

    queue[++rear] = node;
}

// Dequeue
struct Node* dequeue() {

    if(front > rear)
        return NULL;

    return queue[front++];
}

// Check Empty
int isEmpty() {
    return front > rear;
}

// Level Order Traversal
void levelOrder(struct Node *root) {

    if(root == NULL)
        return;

    enqueue(root);

    while(!isEmpty()) {

        struct Node *current = dequeue();

        printf("%d ", current->data);

        if(current->left != NULL)
            enqueue(current->left);

        if(current->right != NULL)
            enqueue(current->right);
    }
}

int main() {

    struct Node *root = createNode(50);

    root->left = createNode(30);
    root->right = createNode(70);

    root->left->left = createNode(20);
    root->left->right = createNode(40);

    root->right->left = createNode(60);
    root->right->right = createNode(80);

    printf("Level Order Traversal:\n");

    levelOrder(root);

    printf("\n");

    return 0;
}