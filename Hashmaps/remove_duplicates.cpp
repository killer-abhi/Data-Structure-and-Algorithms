#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
vector<int> removeDuplicates(int *arr,int size){
    vector<int> output;
    unordered_map<int,bool> arrMap;
    for(int i=0;i<size;i++){
        if(arrMap.count(arr[i])>0){
            continue;
        }
        arrMap[arr[i]]=true;
        output.push_back(arr[i]);   
    }
    return output;
}
int main()
{
    int arr[]={1,2,1,3,4,2,5,2,4,6,3};
    vector<int> res=removeDuplicates(arr,11);
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<"\t";
    }
    return(0);
}