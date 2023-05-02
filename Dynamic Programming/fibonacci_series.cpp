#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n<=1){
        return n;
    }
    int a=fibonacci(n-1);
    int b=fibonacci(n-2);

    return a+b;
}
int fibo_helper(int n,int *ans){
    if(n<=1){
        return 1;
    }

    if(ans[n]!=-1){
        return ans[n];
    }
    int a=fibo_helper(n-1,ans);
    int b=fibo_helper(n-2,ans);
    ans[n]=a+b;
    return ans[n]; 
}
int fibo(int n){
    int *ans=new int[n+1];
    for(int i=0;i<=n;i++){
        ans[i]=-1;
    }
    return fibo_helper(n,ans);
}

int method3(int n){
    int *ans=new int[n+1];
    ans[0]=0;
    ans[1]=1;

    for(int i=2;i<=n;i++){
        ans[i]=ans[i-1]+ans[i-2];
    }
    return ans[n];
}
int main()
{
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
    cout<<method3(n);
    return(0);
}