#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int findMaxFrequency(int *arr,int size){
    int output;
    unordered_map<int,int> arrMap;
    int maxFreq=0,maxFreqElement;
    for(int i=0;i<size;i++){
        arrMap[arr[i]]++;
        if(arrMap[arr[i]]>maxFreq){
            maxFreq=arrMap[arr[i]];
            maxFreqElement=arr[i];
        }
    }
    return maxFreqElement;
}
int main()
{
    int arr[]={1,2,1,3,4,2,5,2,4,6,3};
    int res=findMaxFrequency(arr,11);
    cout<<"Element With Max Frequency :: "<<res;
    return(0);
}