//calculates sum of the array by recursion

#include<iostream>
#include<conio.h>

using namespace std;

int array_sum(int A[],int size){
    if(size==0){
        return 0;
    }
    return(A[0]+array_sum(A+1,size-1));
}

int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    cout<<"SUM = "<<array_sum(arr,n);
    return 0;
}