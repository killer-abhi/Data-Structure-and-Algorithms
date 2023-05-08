#include <bits/stdc++.h>
using namespace std;

int findMinVertex(int *distance, bool *visited, int n)
{

    int minVertex = -1;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i] && (minVertex == -1 || distance[i] < distance[minVertex]))
        {
            minVertex = i;
        }
    }
    return minVertex;
}

void Dijikstra_Algo(int **E, int n, int e)
{

    bool *visited = new bool[n];
    int *minDistances = new int[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
        minDistances[i] = INT_MAX;
    }

    minDistances[0] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        // int minVertex = findMinVertex(minDistances, visited, n);
        int minVertex=i;
        visited[minVertex] = true;
        for (int j = 0; j < n; j++)
        {
            if (E[minVertex][j] != 0 && !visited[j])
            {
                int dist = minDistances[minVertex] + E[minVertex][j];
                if (dist < minDistances[j])
                {
                    minDistances[j] = dist;
                }
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<i<<"   "<<minDistances[i]<<endl;
    }

    delete []visited;
    delete []minDistances;

}

main()
{
    int n, e;
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
        int v1, v2, w;
        cin >> v1 >> v2 >> w;
        edges[v1][v2] = w;
        edges[v2][v1] = w;
    }

    Dijikstra_Algo(edges,n,e);

    for(int i=0;i<n;i++){
        delete [] edges[i];
    }
    delete []edges;
    return (0);
}