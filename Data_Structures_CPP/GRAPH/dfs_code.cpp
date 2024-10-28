#include <iostream>
#include <list>

class Graph {
    int V;
    std::list<int> *adj;

    void DFSUtil(int v, bool visited[]) {
        visited[v] = true;
        std::cout << v << " ";

        for (auto i = adj[v].begin(); i != adj[v].end(); ++i)
            if (!visited[*i])
                DFSUtil(*i, visited);
    }

public:
    Graph(int V) {
        this->V = V;
        adj = new std::list<int>[V];
    }

    void addEdge(int v, int w) {
        adj[v].push_back(w);
    }

    void DFS(int v) {
        bool *visited = new bool[V];
        for (int i = 0; i < V; i++)
            visited[i] = false;

        DFSUtil(v, visited);
    }
};

int main() {
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);

    g.DFS(2);

    return 0;
}
