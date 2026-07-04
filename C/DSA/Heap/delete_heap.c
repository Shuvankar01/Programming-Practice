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

// Heapify down
void heapify(int heap[], int size, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < size && heap[left] > heap[largest])
        largest = left;

    if (right < size && heap[right] > heap[largest])
        largest = right;

    if (largest != i) {
        int temp = heap[i];
        heap[i] = heap[largest];
        heap[largest] = temp;

        heapify(heap, size, largest);
    }
}

// Delete root from max heap
int deleteRoot(int heap[], int *size) {
    if (*size <= 0) {
        printf("Heap is empty.\n");
        return -1;
    }

    int root = heap[0];
    heap[0] = heap[*size - 1];
    (*size)--;

    heapify(heap, *size, 0);

    return root;
}

int main() {
    int heap[MAX] = {60, 30, 50, 10, 20, 35, 40};
    int size = 7;

    printf("Heap before deletion:\n");
    printHeap(heap, size);

    int deleted = deleteRoot(heap, &size);

    printf("\nDeleted root = %d\n", deleted);
    printf("Heap after deletion:\n");
    printHeap(heap, size);

    return 0;
}