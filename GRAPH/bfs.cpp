#include <iostream>
#include <queue>
#include <ctime>
#include <cstdlib> // For rand() and srand()
using namespace std;

#define MAX 100  // Adjust this for the maximum number of vertices

class Graph {
    int adj[MAX][MAX]; // Adjacency matrix
    int n; // Number of vertices

public:
    Graph(int vertices) {
        n = vertices;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                adj[i][j] = 0; // Initialize adjacency matrix to 0
    }

    void addEdge(int u, int v) {
        adj[u][v] = 1; // Add edge from u to v
        adj[v][u] = 1; // For undirected graph
    }

    void addRandomEdges(int edges) {
        srand(time(nullptr)); // Seed random number generator
        int count = 0;
        while (count < edges) {
            int u = rand() % n;
            int v = rand() % n;
            if (u != v && adj[u][v] == 0) { // Avoid self-loops and duplicates
                addEdge(u, v);
                count++;
            }
        }
    }

    void BFS(int start) {
        bool visited[MAX] = {false}; // Visited array
        queue<int> q;

        visited[start] = true;
        q.push(start);

        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << " ";

            for (int i = 0; i < n; i++) {
                if (adj[node][i] == 1 && !visited[i]) {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
        cout << endl;
    }
};

int main() {
    int vertices, edges, option;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    
    Graph g(vertices);

    cout << "Choose input method:\n";
    cout << "1. User-defined edges\n";
    cout << "2. Randomly generated edges\n";
    cout << "Enter your choice: ";
    cin >> option;

    switch (option) {
        case 1: {
            cout << "Enter the number of edges: ";
            cin >> edges;

            cout << "Enter the edges (u v): " << endl;
            for (int i = 0; i < edges; i++) {
                int u, v;
                cin >> u >> v;
                g.addEdge(u, v);
            }
            break;
        }
        case 2: {
            cout << "Enter the number of edges to generate randomly: ";
            cin >> edges;
            g.addRandomEdges(edges);
            break;
        }
        default:
            cout << "Invalid option. Exiting.\n";
            return 1;
    }

    int startNode;
    cout << "Enter the starting node for BFS: ";
    cin >> startNode;

    clock_t start = clock(); // Start timing
    cout << "BFS starting from vertex " << startNode << ": ";
    g.BFS(startNode);
    clock_t end = clock(); // End timing

    double elapsed_time = double(end - start) / CLOCKS_PER_SEC; // Calculate elapsed time
    cout << "Elapsed time for BFS: " << elapsed_time << " seconds" << endl;

    return 0;
}
