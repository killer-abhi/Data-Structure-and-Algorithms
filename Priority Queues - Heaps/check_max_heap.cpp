#include <bits/stdc++.h>
using namespace std;
bool checkMaxHeap(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int parentIndex = i;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndex = 2 * parentIndex + 2;

        if (leftChildIndex < n && rightChildIndex < n)
        {
            if (arr[parentIndex] < arr[leftChildIndex])
            {
                return false;
            }
            if (arr[parentIndex] < arr[rightChildIndex])
            {
                return false;
            }
        }
    }
    return true;
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
    if (checkMaxHeap(arr, n))
    {
        cout << "True" << endl;
    }
    else
    {
        cout << "False" << endl;
    }
    return (0);
}