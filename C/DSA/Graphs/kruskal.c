#include <stdio.h>
#include <stdlib.h>

#define V 5
#define E 7

// Edge structure
struct Edge {
    int src, dest, weight;
};

// Subset structure for Union-Find
struct Subset {
    int parent;
    int rank;
};

// Find parent of a node
int find(struct Subset subsets[], int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);

    return subsets[i].parent;
}

// Union of two sets
void unionSets(struct Subset subsets[], int x, int y) {
    int rootX = find(subsets, x);
    int rootY = find(subsets, y);

    if (subsets[rootX].rank < subsets[rootY].rank)
        subsets[rootX].parent = rootY;
    else if (subsets[rootX].rank > subsets[rootY].rank)
        subsets[rootY].parent = rootX;
    else {
        subsets[rootY].parent = rootX;
        subsets[rootX].rank++;
    }
}

// Compare function for qsort
int compare(const void* a, const void* b) {
    return ((struct Edge*)a)->weight - ((struct Edge*)b)->weight;
}

// Kruskal Algorithm
void kruskalMST(struct Edge edges[]) {
    struct Edge result[V];
    int e = 0;
    int i = 0;

    // Sort edges by weight
    qsort(edges, E, sizeof(edges[0]), compare);

    struct Subset subsets[V];

    for (int v = 0; v < V; v++) {
        subsets[v].parent = v;
        subsets[v].rank = 0;
    }

    while (e < V - 1 && i < E) {
        struct Edge nextEdge = edges[i++];

        int x = find(subsets, nextEdge.src);
        int y = find(subsets, nextEdge.dest);

        // Include edge if it does not form cycle
        if (x != y) {
            result[e++] = nextEdge;
            unionSets(subsets, x, y);
        }
    }

    int totalWeight = 0;
    printf("Edges in Minimum Spanning Tree:\n");
    for (i = 0; i < e; i++) {
        printf("%d - %d \tWeight = %d\n",
               result[i].src, result[i].dest, result[i].weight);
        totalWeight += result[i].weight;
    }

    printf("Total Weight of MST = %d\n", totalWeight);
}

int main() {
    struct Edge edges[E] = {
        {0, 1, 2},
        {0, 2, 6},
        {0, 3, 3},
        {1, 3, 8},
        {1, 4, 5},
        {2, 4, 7},
        {3, 4, 9}
    };

    kruskalMST(edges);

    return 0;
}