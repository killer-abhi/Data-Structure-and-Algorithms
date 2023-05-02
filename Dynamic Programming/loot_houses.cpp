#include<bits/stdc++.h>
using namespace std;

int maxLoot(int *houses,int si,int ei){
    if(si>=ei){
        return 0;
    }

    int x=maxLoot(houses,si+2,ei);
    int y=maxLoot(houses,si+1,ei);

    int ans=max(houses[si],max(x,y));
    return ans;
}
int maxLoot(int *houses,int n){
    
    int *dp=new int[n];
    dp[0]=houses[0];
    dp[1]=max(houses[1],houses[0]);

    for(int i=2;i<n;i++){
        dp[i]=max(houses[i]+dp[i-2],dp[i-1]);
    }
    return dp[n];
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[n-1];
    }
    cout<<endl<<endl<<maxLoot(arr,n);
    return(0);
}