#include <iostream>
#include<stdlib.h>
#include<conio.h>
#include <limits.h>
#include <bits/stdc++.h>

using namespace std;

int firstMissing(int arr[], int n)
{
    int min =1;
    int max = 0;
    int positives=0;
    int arrsum=0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>=0)
        {
            positives++;
            arrsum+=arr[i];
            if (arr[i] > max)
            {
                max = arr[i];
            }
            if (arr[i] < min)
            {
                min = arr[i];
            }
        }
    }
    int *newarr=new int[max+1];
    for(int i=1;i<=max+1;i++){
        newarr[i]=-1;
    }
    for (int i = 0; i < n; i++)
    {
        if(arr[i]>=0)
        {
            int index=arr[i];
            newarr[index]=arr[i];
        }
    }        
    for(int i=1;i<=max+1;i++){
        cout<<newarr[i]<<"\t";
    }
    for(int i=1;i<=max+1;i++){
        if(newarr[i]==-1){
            return(i);
        }
    }
    // int reqSum=((max)*(max+1))/2;
    // int sumdiff=reqSum-arrsum;
    // cout<<"\nTotal Positives :: "<<positives;
    // cout <<"\nMINIMUM ::" << min;
    // cout <<"\nMAXIMUM ::" << max;
    // cout<<"\n sum :: "<<arrsum;
    // cout<<"\n Required Sum ::"<<reqSum;
    // cout<<"\n Sum Difference ::"<<sumdiff;

    // if(min>1){
    //     return (1);
    // }
    // else if((sumdiff)>max){
    //     for(int i=min;i<max;i++){
    //         int flag=0;
    //         for(int j=0;j<n;j++){
    //             if(arr[j]==i){
    //                 flag=1;
    //                 break;
    //             }
    //         }
    //         if(flag==0){
    //             return i;
    //         }
    //     }
    // }
    // else if(sumdiff==0){
    //     return(max+1);
    // }
    // else{
    //     return(sumdiff);
    // }
}

int main()
{
    // int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    // int arr[] = {1,2,3,4,5,6,7,8,9,10,11};
    int arr[] = {-1,-5,6,1,0,2,4,8,7,15};
    int min = firstMissing(arr, 10);
    cout << "\n\n Required Minimum Positive Number :: "<<min;
    return 0;
}
