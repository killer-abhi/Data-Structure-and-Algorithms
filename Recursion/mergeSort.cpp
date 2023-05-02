#include <bits/stdc++.h>
using namespace std;

void helper(int *arr, int si, int ei, int mi)
{
    int i = si, j = mi + 1, k = 0;
    int res[ei - si + 1];
    while (i <= mi && j <= ei)
    {
        if (arr[i] < arr[j])
        {
            res[k] = arr[i];
            i++;
        }
        else
        {
            res[k] = arr[j];
            j++;
        }
        k++;
    }
    while (i <= mi)
    {
        res[k] = arr[i];
        i++;
        k++;
    }
    while (j <= ei)
    {
        res[k] = arr[j];
        j++;
        k++;
    }
    //Copy the sorted values
    k = 0;
    i = si;
    while (i <= ei)
    {
        arr[i] = res[k];
        k++;
        i++;
    }
    return;
}

void mergeSort(int *arr, int si, int ei)
{
    // Base Case
    if (si>=ei)
    {
        return;
    }

    // Recursive Call
    int mi = si + (ei - si) / 2;
    mergeSort(arr, si, mi);
    mergeSort(arr, mi + 1, ei);

    // Work
    helper(arr, si, ei, mi);
    return;
}

int main()
{
    int arr[] = {5,4,3,2,1};
    mergeSort(arr,0, 4);
    return (0);
}