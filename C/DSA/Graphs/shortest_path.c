#include <stdio.h>
#include <stdlib.h>

#define MAX 10

// Node for adjacency list
struct Node {
    int vertex;
    struct Node* next;
};

// Graph structure
struct Graph {
    int numVertices;
    struct Node* adjLists[MAX];
};

// Queue
int queue[MAX];
int front = 0;
int rear = -1;

// Create node
struct Node* createNode(int v) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->vertex = v;
    newNode->next = NULL;
    return newNode;
}

// Create graph
struct Graph* createGraph(int vertices) {
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));
    graph->numVertices = vertices;

    for (int i = 0; i < vertices; i++) {
        graph->adjLists[i] = NULL;
    }

    return graph;
}

// Add edge
void addEdge(struct Graph* graph, int src, int dest) {
    struct Node* newNode = createNode(dest);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;

    newNode = createNode(src);
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
}

// Queue operations
void enqueue(int value) {
    queue[++rear] = value;
}

int dequeue() {
    return queue[front++];
}

int isEmpty() {
    return front > rear;
}

// Shortest path using BFS
void shortestPath(struct Graph* graph, int startVertex) {
    int visited[MAX] = {0};
    int distance[MAX];

    for (int i = 0; i < graph->numVertices; i++) {
        distance[i] = -1;
    }

    visited[startVertex] = 1;
    distance[startVertex] = 0;
    enqueue(startVertex);

    while (!isEmpty()) {
        int currentVertex = dequeue();

        struct Node* temp = graph->adjLists[currentVertex];

        while (temp) {
            int adjVertex = temp->vertex;

            if (!visited[adjVertex]) {
                visited[adjVertex] = 1;
                distance[adjVertex] = distance[currentVertex] + 1;
                enqueue(adjVertex);
            }

            temp = temp->next;
        }
    }

    printf("Shortest distance from vertex %d:\n", startVertex);
    for (int i = 0; i < graph->numVertices; i++) {
        printf("To %d = %d\n", i, distance[i]);
    }
}

int main() {
    struct Graph* graph = createGraph(5);

    addEdge(graph, 0, 1);
    addEdge(graph, 0, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 2, 4);

    shortestPath(graph, 0);

    return 0;
}