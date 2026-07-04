#include <stdio.h>

#define MAX 100

// Print heap
void printHeap(int heap[], int size) {
    printf("Min Heap elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n");
}

// Heapify function for min heap
void heapify(int heap[], int size, int i) {
    int smallest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && heap[left] < heap[smallest])
        smallest = left;

    if (right < size && heap[right] < heap[smallest])
        smallest = right;

    if (smallest != i) {
        int temp = heap[i];
        heap[i] = heap[smallest];
        heap[smallest] = temp;

        heapify(heap, size, smallest);
    }
}

// Build min heap
void buildMinHeap(int heap[], int size) {
    for (int i = size / 2 - 1; i >= 0; i--) {
        heapify(heap, size, i);
    }
}

int main() {
    int heap[] = {50, 40, 35, 30, 20, 10};
    int size = sizeof(heap) / sizeof(heap[0]);

    printf("Original Array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n\n");

    buildMinHeap(heap, size);

    printHeap(heap, size);

    return 0;
}