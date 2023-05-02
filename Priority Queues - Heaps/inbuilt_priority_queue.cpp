#include<bits/stdc++.h>
using namespace std;
int main()
{
    /// default it is max-heap
    priority_queue<int> pq;

    //for min-order heap
    // priority_queue<int,vector<int>,greater<int>> pq;
    pq.push(10);
    pq.push(5);
    pq.push(7);
    pq.push(9);

    cout<<"Size :: "<<pq.size()<<endl;
    cout<<"Top :: "<<pq.top()<<endl;

    while (!pq.empty())
    {
        cout<<pq.top()<<endl;
        pq.pop();
    }
    
    return(0);
}