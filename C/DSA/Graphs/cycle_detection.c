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
    int visited[MAX];
};

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
        graph->visited[i] = 0;
    }

    return graph;
}

// Add undirected edge
void addEdge(struct Graph* graph, int src, int dest) {
    struct Node* newNode = createNode(dest);
    newNode->next = graph->adjLists[src];
    graph->adjLists[src] = newNode;

    newNode = createNode(src);
    newNode->next = graph->adjLists[dest];
    graph->adjLists[dest] = newNode;
}

// DFS cycle detection
int isCycleUtil(struct Graph* graph, int vertex, int parent) {
    graph->visited[vertex] = 1;

    struct Node* temp = graph->adjLists[vertex];

    while (temp) {
        int adjVertex = temp->vertex;

        if (!graph->visited[adjVertex]) {
            if (isCycleUtil(graph, adjVertex, vertex))
                return 1;
        }
        else if (adjVertex != parent) {
            return 1;
        }

        temp = temp->next;
    }

    return 0;
}

// Check cycle in graph
int isCycle(struct Graph* graph) {
    for (int i = 0; i < graph->numVertices; i++) {
        graph->visited[i] = 0;
    }

    for (int i = 0; i < graph->numVertices; i++) {
        if (!graph->visited[i]) {
            if (isCycleUtil(graph, i, -1))
                return 1;
        }
    }

    return 0;
}

int main() {
    struct Graph* graph = createGraph(4);

    addEdge(graph, 0, 1);
    addEdge(graph, 1, 3);
    addEdge(graph, 3, 2);
    addEdge(graph, 2, 0);   // Creates cycle

    if (isCycle(graph))
        printf("Cycle detected in graph.\n");
    else
        printf("No cycle found in graph.\n");

    return 0;
}