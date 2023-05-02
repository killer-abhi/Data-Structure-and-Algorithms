#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

void find_unique(int arr[],int n){
    
    // time -complexity = O(n) using XOR operator
    int unique=arr[0];
    for(int i=1;i<n;i++){
        unique=unique^arr[i];
    }
    cout<<"\n\n Unique Element Is :: "<<unique;
}

int main()
{
    int size;
    cout<<"Enter Size Of Array :: ";
    cin>>size;
    int *arr=new int[10];
    cout<<"\n \n Enter The Elements :: \n";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    find_unique(arr,size);
    return 0;
}