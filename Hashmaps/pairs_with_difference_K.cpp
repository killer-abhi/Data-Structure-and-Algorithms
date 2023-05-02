#include<bits/stdc++.h>
#include<unordered_map>

using namespace std;

vector<int> findPairs(int *arr,int size,int k){
    
    unordered_map<int,int> arrMap;
    for(int i=0;i<size;i++){
            arrMap[arr[i]]++;
    }
    unordered_map<int,int>::iterator it1=arrMap.begin();
    
    vector<int> output;
    
    while(it1!=arrMap.end()){

        int key=it1->first;
        int diff=key-k;
        // diff=abs(diff);
        if(arrMap.count(diff)>0){
        cout<<"Key = "<<key<<"\tDiff = "<<diff<<endl;
            int keyFreq=it1->second;
            int diffFreq=arrMap.at(diff);
            output.push_back(key);
            output.push_back(diff);
            arrMap[key]=0;
            arrMap[diff]=0;
        }
        it1++;
    }
    return output;
}
int main()
{
    int n;
    cout<<"Size :: ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }    
    int k;
    cout<<"Difference K :: ";
    cin>>k;
    vector<int> res=findPairs(arr,n,k);
    
    // for(int i=0;i<res.size();i++){
    //     cout<<res[i]<<"\t";
    // }
    return(0);
}