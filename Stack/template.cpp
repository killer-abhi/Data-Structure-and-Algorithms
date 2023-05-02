#include<bits/stdc++.h>
#include "Pair.cpp"
using namespace std;

int main()
{
    Pair<int> p1;

    Pair<double> p2;

    p1.setX(10);
    p1.setY(450);
    cout<<p1.getX()<<endl;
    cout<<p1.getY()<<endl;

    p2.setX(2.34);
    p2.setY(757.34);
    cout<<p2.getX()<<endl;
    cout<<p2.getY()<<endl;

    Pair <char> p3;
    p3.setX('w');
    p3.setY('s');
    cout<<p3.getX()<<endl;
    cout<<p3.getY()<<endl;
    return(0);
}