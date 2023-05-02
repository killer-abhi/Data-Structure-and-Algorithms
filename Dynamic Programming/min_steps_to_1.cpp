#include<bits/stdc++.h>
using namespace std;

int minSteps(int n,int steps=0){
    if(n==1){
        return steps;
    }
    if(n%3==0){
        n=n/3;
    }
    else if(n%2==0){
        n=n/2;
    }
    else{
        n-=1;
    }
    steps++;
    return minSteps(n,steps);
}
int main()
{
    int n;
    cin>>n;
    cout<<minSteps(n);
    return(0);
}