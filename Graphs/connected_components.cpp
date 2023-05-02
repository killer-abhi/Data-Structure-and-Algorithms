#include <bits/stdc++.h>
#include "graphInput.h"
using namespace std;

void connectedComponents(int **edges, int n, int s, bool *visited)
{
    cout << s;
    visited[s] = true;
    for (int i = 0; i < n; i++)
    {
        if (i == s)
        {
            continue;
        }
        if (edges[s][i] == 1 && !visited[i])
        {
            visited[i] = true;
            connectedComponents(edges, n, i, visited);
        }
    }
}

int main()
{
    Graph mygraph;
    mygraph.input();
    int n = mygraph.n;

    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            connectedComponents(mygraph.edges, n, i, visited);
        }
        cout<<endl;
    }
    return (0);
}