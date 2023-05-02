#include<bits/stdc++.h>
#include "graphInput.h"
using namespace std;

bool hasPath(int **edges,int n,int sv,int v1,int v2){

    bool *visited=new bool[n];

    for(int i=0;i<n;i++){
        visited[i]=false;
    }
    visited[sv]=true;
    for(int i=0;i<n;i++){
        if(sv==i){
            continue;
        }
        if(edges[sv][i]==1&&!visited[i]){
            visited[i]=true;
        }
    }
    return visited[v1]&&visited[v2];
}

int main()
{
    Graph mygraph;
    mygraph.input();
    int v1,v2;
    cin>>v1>>v2;
    cout<<hasPath(mygraph.edges,mygraph.n,0,v1,v2);
    return(0);
}