#include <bits/stdc++.h>
#include "graphInput.h"

using namespace std;

bool isConnected(int **edges, int n, int s,bool *visited)
{
    for (int i = 0; i < n; i++)
    {
        if (i == s)
        {
            continue;
        }
        if (edges[s][i] == 1 && !visited[i])
        {
            visited[i] = true;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << visited[i] << "\t";
        if (!visited[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    Graph mygraph;
    mygraph.input();
    int n=mygraph.n;
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    visited[0]=true;
    if (isConnected(mygraph.edges, mygraph.n, 0,visited))
    {
        cout << "\n\n Graph is Connected";
    }
    else
    {
        cout << "\n\n Graph is not Connected";
    }

    return 0;
}