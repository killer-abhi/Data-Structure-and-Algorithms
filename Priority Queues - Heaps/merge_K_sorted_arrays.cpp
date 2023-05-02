#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;
    cout<<"Enter No Of Arrays ::";
    cin>>k;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(int i=0;i<k;i++){
        cout<<"\n\nEnter Size of Array : "<<i+1<<endl;
        int n;
        cin>>n;
        int arr[n];
        cout<<"Enter Elements Of Array "<<i+1<<endl;
        for(int j=0;j<n;j++){
            cin>>arr[j];
            pq.push(arr[j]);
        }
    }
    cout<<endl<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<"\t";
        pq.pop();
    }
    return(0);
}