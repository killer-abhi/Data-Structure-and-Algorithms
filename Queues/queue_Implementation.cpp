#include<bits/stdc++.h>
#include "Queue_Template.h"
using namespace std;
int main()
{
    Queue <int> q1(4);
    q1.enqueue(1);
    cout<<q1.first()<<endl;
    // cout<<q1.isEmpty()<<endl;
    q1.enqueue(2);
    cout<<q1.first()<<endl;
    q1.enqueue(3);
    cout<<q1.deQueue()<<endl;
    cout<<q1.first()<<endl;
    q1.enqueue(4);
    cout<<q1.first()<<endl;
    q1.enqueue(5);
    cout<<q1.first()<<endl;
    return(0);
}