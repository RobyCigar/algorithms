#include <iostream>
#include <list>
#include <queue>

using namespace std;

class Graph
{
    int vertices;             // Number of vertices
    list<int> *adjacencyList; // Adjacency list representation

public:
    Graph(int V)
    {
        vertices = V;
        adjacencyList = new list<int>[V];
    }

    void addEdge(int v, int w)
    {
        adjacencyList[v].push_back(w);
    }

    void BFS(int startVertex)
    {
        // Mark all vertices as not visited
        bool *visited = new bool[vertices];
        for (int i = 0; i < vertices; i++)
            visited[i] = false;

        // Create a queue for BFS
        queue<int> queue;

        // Mark the current node as visited and enqueue it
        visited[startVertex] = true;
        queue.push(startVertex);

        while (!queue.empty())
        {
            // Dequeue a vertex from the queue and print it
            startVertex = queue.front();
            cout << startVertex << " ";
            queue.pop();

            // Get all adjacent vertices of the dequeued vertex
            // If an adjacent vertex hasn't been visited, mark it
            // as visited and enqueue it
            for (auto i = adjacencyList[startVertex].begin();
                 i != adjacencyList[startVertex].end(); ++i)
            {
                if (!visited[*i])
                {
                    visited[*i] = true;
                    queue.push(*i);
                }
            }
        }
    }
};

int main()
{
    // Create a graph
    Graph graph(6);
    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);
    graph.addEdge(2, 5);

    cout << "Breadth First Traversal (starting from vertex 0): ";
    graph.BFS(0);

    return 0;
}