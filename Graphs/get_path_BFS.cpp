#include <bits/stdc++.h>
#include "graphInput.h"
using namespace std;

bool findPath(vector<pair<int, int>> map, int ev, vector<int> &res)
{
    for (int i = 0; i < map.size(); i++)
    {
        pair<int, int> mapItem;
        mapItem = map[i];
        if (mapItem.first == ev)
        {
            return true;
        }
        if (mapItem.second == ev)
        {
            res.push_back(mapItem.first);
            findPath(map, mapItem.first, res);
        }
    }
}
bool getPathBFS(int **edges, int n, int s, int e)
{

    queue<int> pendingVertices;
    bool ans = false;

    vector<pair<int, int>> map;

    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }

    pendingVertices.push(s);
    visited[s] = true;
    while (!pendingVertices.empty())
    {
        int fv = pendingVertices.front();
        pendingVertices.pop();
        if (fv == e)
        {
            vector<int> res;
            findPath(map, fv, res);

            res.push_back(fv);
            for (int i = 0; i < res.size(); i++)
            {
                cout << res[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (fv == i)
            {
                continue;
            }
            if (edges[fv][i] == 1 && !visited[i])
            {

                pair<int, int> mapItem;
                mapItem.first = fv;
                mapItem.second = i;
                map.push_back(mapItem);

                visited[i] = true;
                pendingVertices.push(i);
            }
        }
    }
}

int main()
{

    Graph mygraph;
    mygraph.input();

    int v1, v2;
    cin >> v1 >> v2;

    int n = mygraph.n;

    vector<int> res;
    getPathBFS(mygraph.edges, n, v1, v2);
    return 0;
}
