#include<bits/stdc++.h>
#include "Dynamic_Queue.cpp"
using namespace std;
int main()
{
    Dynamic_Queue <int> q;
    q.enqueue(1);
    cout<<q.first()<<endl;
    q.enqueue(2);
    cout<<q.first()<<endl;

    cout<<q.deQueue()<<endl;

    q.enqueue(3);
    cout<<q.first()<<endl;
    q.enqueue(4);
    cout<<q.deQueue()<<endl;
    cout<<q.first()<<endl;
    q.enqueue(5);
    cout<<q.first()<<endl;
    cout<<q.deQueue()<<endl;
    q.enqueue(6);
    cout<<q.first()<<endl;
    return(0);
}