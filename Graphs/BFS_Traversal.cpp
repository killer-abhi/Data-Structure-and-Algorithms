#include <bits/stdc++.h>
using namespace std;

void print_BFS(int **edges, int n, int sv)
{

    queue<int> pendingVertices;
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    pendingVertices.push(sv);
    visited[sv] = true;
    while (!pendingVertices.empty())
    {
        int fv = pendingVertices.front();
        pendingVertices.pop();
        cout << fv << endl;

        for (int i = 0; i < n; i++)
        {
            if (i == fv)
            {
                continue;
            }
            if (edges[fv][i] == 1 && !visited[i])
            {
                visited[i] = true;
                pendingVertices.push(i);
            }
        }
    }
}

int main()
{
    int n;
    int e;
    cin >> n >> e;
    int **edges = new int *[n];
    for (int i = 0; i < n; i++)
    {
        edges[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            edges[i][j] = 0;
        }
    }
    for (int i = 0; i < e; i++)
    {
        int f, s;
        cin >> f >> s;
        edges[f][s] = 1;
        edges[s][f] = 1;
    }

    print_BFS(edges, n, 0);
    return (0);
}