#include <iostream>
using namespace std;

int main()
{
    int n, start;
    cout << "Enter number of vertices: ";
    cin >> n;

    int graph[10][10];
    int visited[10];
    int queue[10];

    int front = 0;
    int rear = 0;

    cout << "Enter adjacency matrix:\n";

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            cin >> graph[i][j];
        }
    }

    for (int i=0;i<n;i++){
        visited[i]=0;
    }

    cout << "Enter starting vertex: ";
    cin >> start;

    queue[rear]=start;
    rear++;

    visited[start]=1;

    cout << "BFS Traversal: ";

    while (front<rear)
    {
        int v=queue[front];
        front++;

        cout << v << " ";

        for (int i=0;i<n;i++)
        {
            if (graph[v][i]==1 && visited[i]==0)
            {
                queue[rear]=i;
                rear++;

                visited[i]=1;
            }
        }
    }

    return 0;
}