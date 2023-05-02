#include<bits/stdc++.h>
#include "stackUsingTemplate.cpp"
using namespace std;

int main()
{
    StackUsingTemplate <char> p1;

    p1.push(65);
    cout<<p1.top()<<endl;
    p1.push(66);
    cout<<p1.top()<<endl;
    p1.push(67);
    cout<<p1.top()<<endl;
    p1.push(88);
    cout<<p1.top()<<endl;
    p1.push(90);
    cout<<p1.top()<<endl;

    cout<<p1.pop()<<endl;
    cout<<p1.top()<<endl;

    cout<<p1.pop()<<endl;
    cout<<p1.top()<<endl;
    
    p1.push(104);
    cout<<p1.top()<<endl;
    p1.push(105);
    cout<<p1.top()<<endl;
    return(0);
}