#include <bits/stdc++.h>
#include "graphInput.h"
using namespace std;

bool getPathDFS(int **edges, int n, int s, int e, bool *visited, vector<int> &res)
{
    if (e == s)
    {
        res.push_back(s);
        return true;
    }

    visited[s] = true;

    bool ans = false;

    for (int i = 0; i < n; i++)
    {
        if (i == s)
        {
            continue;
        }
        if (edges[s][i] == 1 && !visited[i])
        {
            ans = getPathDFS(edges, n, i, e, visited, res);
        }
        if (ans)
        {
            res.push_back(s);
            return true;
        }
    }
    return false;
}

int main()
{
    Graph mygraph;
    mygraph.input();
    int v1, v2;
    cin >> v1 >> v2;

    int n = mygraph.n;
    bool *visited = new bool[n];

    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }

    vector<int> res;
    if (getPathDFS(mygraph.edges, n, v1, v2, visited, res))
    {
        cout<<res.size()<<endl;
        for (int i = 0; i < res.size(); i++)
        {
            cout << res[i] << "\t";
        }
    }
    else{
        cout<<"Path Not Found !";
    }
    return (0);
}