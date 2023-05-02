//program to find a number in a array of integers

#include<iostream>
#include<conio.h>

using namespace std;

bool find(int A[],int size,int x){
    if(size==0){
        return false;
    }
    if(A[0]==x){
        return true;
    }
    if(find(A+1,size-1,x)){
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
    int ele;
    cin>>ele;
    cout<<find(arr,n,ele);
    return 0;
}