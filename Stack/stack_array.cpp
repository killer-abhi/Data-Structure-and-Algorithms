#include<bits/stdc++.h>
#include "stackUsingArray.cpp"
#include "dynamicStack.cpp"
using namespace std;

int main()
{
    // stackUsingArray s(5);
    // s.push(10);
    // s.push(20);
    // s.push(30);
    // s.push(40);
    // s.push(50);
    // s.push(70);
    // cout<<s.top()<<endl;
    // cout<<s.pop()<<endl;
    // cout<<s.top()<<endl;
    // cout<<s.pop()<<endl;
    // cout<<s.top()<<endl;

    DynamicStack obj;
    cout<<obj.top();
    obj.push(1);
    cout<<obj.top();
    obj.push(2);
    cout<<obj.top();
    obj.push(3);
    cout<<obj.top();
    obj.push(4);
    cout<<obj.top();
    obj.push(6);
    cout<<obj.top();
    obj.push(7);
    cout<<obj.top();
    obj.push(8);
    cout<<obj.top();
    obj.push(9);
    cout<<obj.top();
    return(0);
}