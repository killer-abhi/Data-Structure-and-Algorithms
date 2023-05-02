#include<bits/stdc++.h>
using namespace std;

void rotateLeft(int arr[],int n,int k){
    int shifts=k%n;
    int temp[shifts];
    for(int i=0;i<shifts;i++){
        temp[i]=arr[i];
    }
    int i=0;
    while(i<n-shifts){
        arr[i]=arr[i+shifts];
        i++;
    }
    int j=0;
    while(j<shifts){
        arr[i]=temp[j];
        i++;
        j++;
    }
}
//using reverse algorithm
void reverseAll(int arr[],int n){
    int half=n/2;
    for(int i=0,j=n-1;i<half;i++){
        swap(arr[i],arr[j]);
        j--;
    }
}
void rotate(int arr[],int n,int k){
    int d=k%n;
    int half1=(n-d)/2;
    for(int i=0,j=n-d-1;i<half1;i++){
        swap(arr[i],arr[j]);
        j--;
    }
    int half2=d/2;
    for(int i=n-d,j=n-1;i<(n-d+half2);i++){
        swap(arr[i],arr[j]);
        j--;
    }
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // n=7;k=201;
    // int arr[]={1,2,3,4,5,6,7};
    // rotateLeft(arr,n,k);

    //first we have to reverse full array
    reverseAll(arr,n);
    rotate(arr,n,k);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    return(0);
}