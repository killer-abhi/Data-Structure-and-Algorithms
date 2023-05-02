#include<bits/stdc++.h>
using namespace std;

void printBFS(int **edges, int n, int sv,bool *visited)
{
    queue<int> pendingVertices;
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

void BFS(int **edges,int n){
    bool *visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }   
    for(int i=0;i<n;i++){
        if(!visited[i])
        printBFS(edges,n,i,visited);
    }
    delete []visited;
}

void printDFS(int **edges,int n,int sv,bool *visited){
    cout<<sv<<endl;
    visited[sv]=true;
    for(int i=0;i<n;i++){
        if(i==sv){
            continue;
        }
        if(edges[sv][i]==1){
            if(visited[i]){
                continue;
            }
            visited[i]=true;
            printDFS(edges,n,i,visited);
        }
    }
}

void DFS(int **edges,int n){
    bool *visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=false;
    }   

    for(int i=0;i<n;i++){
        if(!visited[i])
        printDFS(edges,n,i,visited);
    }

    delete []visited;
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

    cout<<"DFS :: "<<endl;
    DFS(edges,n);
    cout<<"BFS :: "<<endl;
    BFS(edges,n);
    return(0);
}