#include <stdio.h>

#define MAX 100

// Function to print heap
void printHeap(int heap[], int size) {
    printf("Max Heap elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n");
}

// Heapify function for max heap
void heapify(int heap[], int size, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    // Check left child
    if (left < size && heap[left] > heap[largest])
        largest = left;

    // Check right child
    if (right < size && heap[right] > heap[largest])
        largest = right;

    // If root is not largest, swap and continue heapifying
    if (largest != i) {
        int temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;

        heapify(heap, size, largest);
    }
}

// Build max heap from array
void buildMaxHeap(int heap[], int size) {
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(heap, size, i);
    }
}

int main() {
    int heap[] = {10, 20, 35, 30, 40, 50};
    int size = sizeof(heap) / sizeof(heap[0]);

    printf("Original Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n\n");

    buildMaxHeap(heap, size);

    printHeap(heap, size);

    return 0;
}