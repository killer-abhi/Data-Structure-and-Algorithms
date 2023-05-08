#include <bits/stdc++.h>
using namespace std;

class Edges
{
public:
    int source;
    int dest;
    int weight;

    void input(int v1, int v2, int w)
    {
        source = v1;
        dest = v2;
        weight = w;
    }
};

bool weightComarator(Edges e1, Edges e2)
{
    return (e1.weight < e2.weight);
}

int findParent(int v, int *parent)
{
    if (parent[v] == v)
    {
        return v;
    }
    return findParent(parent[v], parent);
}
void Kruskal(Edges *input, int n, int E)
{

    sort(input, input + E, weightComarator);

    Edges *output = new Edges[n - 1];

    int *parent = new int[n];
    for (int i = 0; i < n; i++)
    {
        parent[i] = i;
    }

    int count = 0;
    int i = 0;
    while (count != n - 1)
    {
        Edges currentEdge = input[i];

        // Check if current Edge is safe to insert in MST

        int sourceParent = findParent(currentEdge.source, parent);
        int destParent = findParent(currentEdge.dest, parent);

        if (sourceParent != destParent)
        {
            output[count] = currentEdge;
            count++;

            parent[sourceParent] = destParent;
        }
        i++;
    }
    cout << "\n\nOutput " << endl
         << endl;
    for (int i = 0; i < n - 1; i++)
    {
        if (output[i].source < output[i].dest)
        {
            cout << output[i].source << "   " << output[i].dest << "   " << output[i].weight << endl;
        }
        else
        {
            cout << output[i].dest << "   " << output[i].source << "   " << output[i].weight << endl;
        }
    }
}

int main()
{

    int n, E;
    cin >> n >> E;

    Edges *input = new Edges[E];

    for (int i = 0; i < E; i++)
    {
        int v1, v2, weight;
        cin >> v1 >> v2 >> weight;
        input[i].input(v1, v2, weight);
    }
    Kruskal(input, n, E);
    return 0;
}