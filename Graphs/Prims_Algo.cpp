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

void Prims_Algo(int **E, int n, int e)
{

    int *parent=new int[n];
    bool *visited = new bool[n];
    int *weights = new int[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
        weights[i] = INT_MAX;
    }

    parent[0]=-1;
    weights[0] = 0;

    for (int i = 0; i < n - 1; i++)
    {
        // int minVertex = findMinVertex(weights, visited, n);
        int minVertex=i;
        visited[minVertex] = true;
        for (int j = 0; j < n; j++)
        {
            if (E[minVertex][j] != 0 && !visited[j])
            {
                if(E[minVertex][j]<weights[j]){
                    weights[j]=E[minVertex][j];
                    parent[j]=minVertex;;
                }
            }
        }
    }
    for(int i=1;i<n;i++){
        cout<<i<<"   "<<parent[i]<<"   "<<weights[i]<<endl;
    }

    delete []visited;
    delete []weights;
    delete []parent;
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

    Prims_Algo(edges,n,e);

    for(int i=0;i<n;i++){
        delete [] edges[i];
    }
    delete []edges;
    return (0);
}