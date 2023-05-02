// Given an integer sorted array (sorted in increasing order)
// and an element x, find the x in given array
// using binary search. Return the index of x.

#include <bits/stdc++.h>
using namespace std;

int binary_Search(int Arr[], int x, int start, int end)
{
    if (end >= start)
    {
        int mid = (start + end) / 2;
        if (Arr[mid] == x)
        {
            return mid;
        }
        if (x > Arr[mid])
        {
            return(Arr,x,mid+1,end);
        }
        else
        {
            return(Arr,x,start,mid-1);
        }
    }
    return -1;
}

int main()
{
    int n;
    cin >> n;
    int Arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Arr[i];
    }
    int x;
    cin >> x;
    int index = binary_Search(Arr,x,0,n-1);
    cout << index;
    return 0;
}