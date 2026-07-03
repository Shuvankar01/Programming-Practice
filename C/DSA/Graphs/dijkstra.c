#include <stdio.h>

#define V 5
#define INF 99999

// Function to find the vertex with minimum distance
int minDistance(int dist[], int visited[]) {
    int min = INF, minIndex = -1;

    for (int i = 0; i < V; i++) {
        if (!visited[i] && dist[i] < min) {
            min = dist[i];
            minIndex = i;
        }
    }

    return minIndex;
}

// Dijkstra Algorithm
void dijkstra(int graph[V][V], int source) {
    int dist[V];
    int visited[V];

    // Initialize distances and visited array
    for (int i = 0; i < V; i++) {
        dist[i] = INF;
        visited[i] = 0;
    }

    dist[source] = 0;

    // Find shortest path for all vertices
    for (int count = 0; count < V - 1; count++) {
        int u = minDistance(dist, visited);

        if (u == -1)
            break;

        visited[u] = 1;

        for (int v = 0; v < V; v++) {
            if (!visited[v] &&
                graph[u][v] &&
                dist[u] != INF &&
                dist[u] + graph[u][v] < dist[v]) {

                dist[v] = dist[u] + graph[u][v];
            }
        }
    }

    printf("Shortest distances from source %d:\n", source);
    for (int i = 0; i < V; i++) {
        printf("To %d = %d\n", i, dist[i]);
    }
}

int main() {
    int graph[V][V] = {
        {0, 2, 4, 1, 0},
        {2, 0, 0, 0, 7},
        {4, 0, 0, 3, 0},
        {1, 0, 3, 0, 1},
        {0, 7, 0, 1, 0}
    };

    dijkstra(graph, 0);

    return 0;
}