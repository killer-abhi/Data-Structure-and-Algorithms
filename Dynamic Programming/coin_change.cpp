#include<bits/stdc++.h>
using namespace std;

int findChange(int *arr,int n,int V,int ways=0){

    if(V==0){
        return 1;
    }
    if(n<=0){
        return 0;
    }
    if(V<0){
        return 0;
    }

    
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int V;
    cin>>V;
    cout<<findChange(arr,n,V);
    return(0);
}