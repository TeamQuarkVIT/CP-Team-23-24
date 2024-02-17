#include <iostream>
#include <vector>
#include <unordered_set>
#include <queue>

using namespace std;

class Graph {
public:
    int vertices;
    vector<vector<int>> adjacencyList;

    Graph(int V) : vertices(V), adjacencyList(V) {}

    void addEdge(int u, int v) {
        adjacencyList[u].push_back(v);
        adjacencyList[v].push_back(u);
    }

    bool isTree() {
        vector<bool> visited(vertices, false);
        queue<pair<int, int>> q;  // <current vertex, parent vertex>

        q.push({0, -1});  // Start DFS from vertex 0 with no parent
        visited[0] = true;

        while (!q.empty()) {
            int current = q.front().first;
            int parent = q.front().second;
            q.pop();

            for (int neighbor : adjacencyList[current]) {
                if (!visited[neighbor]) {
                    visited[neighbor] = true;
                    q.push({neighbor, current});
                } else if (neighbor != parent) {
                    return false;
                }
            }
        }

        int edgeCount = 0;
        for (const auto& edges : adjacencyList) {
            edgeCount += edges.size();
        }

        return edgeCount / 2 == vertices - 1;  // Divide by 2 since each edge is counted twice
    }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(0, 3);
    g.addEdge(1, 4);

    if (g.isTree()) {
        cout << "The graph is a tree." << endl;
    } else {
        cout << "The graph is not a tree." << endl;
    }

    return 0;
}
