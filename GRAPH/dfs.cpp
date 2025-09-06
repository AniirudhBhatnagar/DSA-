#include <iostream>
#include <stack>
#include <ctime>
#include <cstdlib> 
using namespace std;

#define MAX 100  

class Graph {
    int adj[MAX][MAX]; 
    int n; 

public:
    Graph(int vertices) {
        n = vertices;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                adj[i][j] = 0;
    }

    void addEdge(int u, int v) {
        adj[u][v] = 1; 
        adj[v][u] = 1; 
    }

    void addRandomEdges(int edges) {
        srand(time(nullptr)); 
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

    void DFS(int start) {
        bool visited[MAX] = {false}; // Visited array
        stack<int> s; // Explicit stack for DFS

        s.push(start);
        visited[start] = true;

        while (!s.empty()) {
            int node = s.top(); // Get the top node
            s.pop(); // Remove the node from stack
            cout << node << " "; // Visit the node

            // Process all the adjacent vertices of the current node
            for (int i = 0; i < n; i++) {
                if (adj[node][i] == 1 && !visited[i]) {
                    s.push(i); // Push the adjacent node onto the stack
                    visited[i] = true; // Mark it as visited
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
    cout << "Enter the starting node for DFS: ";
    cin >> startNode;

    clock_t start = clock(); // Start timing
    cout << "DFS starting from vertex " << startNode << ": ";
    g.DFS(startNode);
    clock_t end = clock(); // End timing

    double elapsed_time = double(end - start) / CLOCKS_PER_SEC; // Calculate elapsed time
      cout << "Elapsed time for DFS: " << elapsed_time << " seconds" << endl;

    return 0;
}
