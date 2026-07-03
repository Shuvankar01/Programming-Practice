#include <stdio.h>

#define MAX 10

int main() {
    int vertices = 4;
    int graph[MAX][MAX] = {0};

    // Adding edges for undirected graph
    graph[0][1] = 1;
    graph[1][0] = 1;

    graph[0][2] = 1;
    graph[2][0] = 1;

    graph[1][2] = 1;
    graph[2][1] = 1;

    graph[1][3] = 1;
    graph[3][1] = 1;

    graph[2][3] = 1;
    graph[3][2] = 1;

    printf("Adjacency Matrix Representation of Graph:\n\n");

    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            printf("%d ", graph[i][j]);
        }
        printf("\n");
    }

    return 0;
}