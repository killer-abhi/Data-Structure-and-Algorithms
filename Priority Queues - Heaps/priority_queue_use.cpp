#include<bits/stdc++.h>
#include "PriorityQueue.h"
using namespace std;
int main()
{
    PriorityQueue p;
    p.insert(100);
    p.insert(10);
    p.insert(15);
    p.insert(4);
    p.insert(17);
    p.insert(21);
    p.insert(67);

    cout<<"\nSize :: "<<p.getSize()<<endl;
    cout<<"Minimum :: "<<p.getMin()<<endl;
    p.printTree();

    while(!p.isEmpty()){
        cout<<p.removeMin()<<endl;
    }

    return(0);
}