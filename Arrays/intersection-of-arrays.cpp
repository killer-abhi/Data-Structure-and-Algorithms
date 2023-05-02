#include<bits/stdc++.h>
using namespace std;

void helper(int arr[],int si,int ei,int mi){

    int i=si,j=mi+1,k=0;
    int res[ei-si+1];
    while(i<=mi&&j<=ei){
        if(arr[i]<arr[j]){
            res[k]=arr[i];
            i++;
        }
        else{
            res[k]=arr[j];
            j++;
        }
        k++;
    }
    while(i<=mi){
        res[k]=arr[i];
        i++;
        k++;
    }
    while(j<=ei){
        res[k]=arr[j];
        j++;
        k++;
    }
    i=si;
    k=0;
    while(i<=ei){
        arr[i]=res[k];
        i++;
        k++;
    }
    return;
}
void mergeSort(int arr[],int si,int ei){
    if(si>=ei){
        return;
    }
    int mi=(si+ei)/2;
    mergeSort(arr,si,mi);
    mergeSort(arr,mi+1,ei);

    helper(arr,si,ei,mi);
    return;
}
int main()
{
    int m,n;
    cin>>m;
    int arr1[m];
    // int arr1[]={4,7,2,3,9,6,5};
    for(int i=0;i<m;i++){
        cin>>arr1[i];
    }
    mergeSort(arr1,0,m-1);
    cin>>n;
    int arr2[n];
    // int arr2[]={4,2,5,8,3,4,2,9};
    for(int i=0;i<n;i++){
        cin>>arr2[i];
    }
    mergeSort(arr2,0,n-1);

    //checking common elements in both the arrays

    int i=0,j=0,k=0;
    int res[m+n];

    while(i+j < m+n){
        if(arr1[i]==arr2[j]){
            res[k]=arr1[i];
            i++;
            j++;
            k++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr2[j]<arr1[i]){
            j++;
        }
    }
    
    //Print intersection Array
    i=0;
    cout<<endl;
    while(i<k){
        cout<<res[i]<<"\t";
        i++;
    }
    return(0);
}