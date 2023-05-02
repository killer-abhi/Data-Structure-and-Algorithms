// checks whether a integer array is sorted or not by recursion

#include<iostream>
#include<conio.h>

using namespace std;

bool check_sorted(int arr[],int n){
    if(n==0 ||n==1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    if(check_sorted(arr+1,n-1)){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int n;
    cin>>n;
    int *arr=new int[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<check_sorted(arr,n);
    return 0;
}