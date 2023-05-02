#include<bits/stdc++.h>
using namespace std;

void merge(int arr1[],int arr2[],int n,int m){

    int i=0,j=0,k=0;
    int ans[n + m];

    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            ans[k] = arr1[i];
            i++;
        }
        else{
            ans[k] = arr2[j];
            j++;
        }
        k++;
    }

    while(i < n){
        ans[k] = arr1[i];
        i++;
        k++;
    }
    while(j < m){
        ans[k] = arr2[j];
        j++;
        k++;
    }

    i = 0;
    while(i < n+m){
        cout << ans[i] << ' ';
        i++;
    }
    cout << endl;
    return;
}
int main()
{

    int n, m;
    cin >> n>> m;
    int arr1[n], arr2[m];
    for(int i = 0; i< n; i++){
        cin >> arr1[i];
    }
    for(int i = 0; i< m; i++){
        cin >> arr2[i];
    }

    merge(arr1,arr2,n,m);
    return 0;
}