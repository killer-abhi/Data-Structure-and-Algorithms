#include <bits/stdc++.h>
using namespace std;

int partition(int arr[], int si, int ei)
{
    int pos = 0;
    for (int i = si + 1; i <= ei; i++)
    {
        if (arr[i] <= arr[si])
        {
            pos++;
        }
    }

    swap(arr[pos + si], arr[si]);

    int x = arr[pos];
    
    int i=si,j=ei;
    
    while(i < pos && j > pos){
        if(arr[i] < x){
            i++;
        }
        else if(arr[i] > x){
            swap(arr[i],arr[j]);
            j--;
        }
    }

    return si+pos;
}
void quickSort(int arr[], int si, int ei)
{
    if (si >= ei)
    {
        return;
    }
    int c = partition(arr, si, ei);
    quickSort(arr, si, c - 1);
    quickSort(arr, c + 1, ei);
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<"\t";
    }
    return (0);
}