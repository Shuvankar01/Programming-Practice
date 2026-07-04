#include <stdio.h>

#define MAX 100

// Print heap
void printHeap(int heap[], int size) {
    printf("Heap elements:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", heap[i]);
    }
    printf("\n");
}

// Insert into max heap
void insert(int heap[], int *size, int value) {
    int i = *size;
    heap[i] = value;
    (*size)++;

    // Heapify up
    while (i != 0 && heap[(i - 1) / 2] < heap[i]) {
        int temp = heap[i];
        heap[i] = heap[(i - 1) / 2];
        heap[(i - 1) / 2] = temp;

        i = (i - 1) / 2;
    }
}

int main() {
    int heap[MAX] = {50, 30, 40, 10, 20, 35};
    int size = 6;

    printf("Heap before insertion:\n");
    printHeap(heap, size);

    insert(heap, &size, 60);

    printf("\nHeap after inserting 60:\n");
    printHeap(heap, size);

    return 0;
}