#include <stdio.h>

#define MAX 100

int heap[MAX];
int size = 0;

// Swap
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Heapify up
void heapifyUp(int index) {
    while (index > 0 && heap[(index - 1) / 2] < heap[index]) {
        swap(&heap[index], &heap[(index - 1) / 2]);
        index = (index - 1) / 2;
    }
}

// Heapify down
void heapifyDown(int index) {
    int largest = index;
    int left = 2 * index + 1;
    int right = 2 * index + 2;

    if (left < size && heap[left] > heap[largest])
        largest = left;

    if (right < size && heap[right] > heap[largest])
        largest = right;

    if (largest != index) {
        swap(&heap[index], &heap[largest]);
        heapifyDown(largest);
    }
}

// Insert into priority queue
void insert(int value) {
    if (size == MAX) {
        printf("Priority Queue Overflow\n");
        return;
    }

    heap[size] = value;
    heapifyUp(size);
    size++;
}

// Extract maximum element
int extractMax() {
    if (size <= 0) {
        printf("Priority Queue Underflow\n");
        return -1;
    }

    int maxValue = heap[0];
    heap[0] = heap[size - 1];
    size--;

    heapifyDown(0);

    return maxValue;
}

// Display queue
void display() {
    printf("Priority Queue elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n");
}

int main() {
    insert(40);
    insert(20);
    insert(50);
    insert(10);
    insert(30);

    printf("Priority Queue after insertions:\n");
    display();

    int removed = extractMax();
    printf("\nRemoved highest priority element = %d\n", removed);

    printf("Priority Queue after deletion:\n");
    display();

    return 0;
}