#include <iostream>
using namespace std;

void DFS(int v, int n, int graph[10][10], int visited[])
{
    cout << v << " ";
    visited[v] = 1;
    for (int i=0;i<n;i++)
    {
        if(graph[v][i]==1 && visited[i]==0){
            DFS(i,n,graph,visited);
        }
    }
}

int main()
{
    int n,start;
    int graph[10][10];
    int visited[10];

    cout << "Enter number of vertices: ";
    cin >> n;

    cout << "Enter adjacency matrix:\n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            cin >> graph[i][j];
        }
    }

    for (int i=0;i<n;i++)
    {
        visited[i]=0;
    }

    cout << "Enter starting vertex: ";
    cin >> start;

    cout << "DFS Traversal: ";
    DFS(start, n, graph, visited);
    return 0;
}