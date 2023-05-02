#include <bits/stdc++.h>
using namespace std;

void inplaceHeapSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int childIndex = i;
        while (childIndex > 0)
        {
            int parentIndex = (childIndex - 1) / 2;
            if (arr[childIndex] < arr[parentIndex])
            {
                swap(arr[childIndex], arr[parentIndex]);
            }
            else
            {
                break;
            }
            childIndex = parentIndex;
        }
    }

    int size = n;
    while (size > 1)
    {
        swap(arr[0], arr[size - 1]);
        size--;

        int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndex = 2 * parentIndex + 2;

        while (leftChildIndex < size)
        {
            int minIndex = parentIndex;
            if (arr[minIndex] > arr[leftChildIndex])
            {
                minIndex = leftChildIndex;
            }
            if (rightChildIndex < size && arr[rightChildIndex] < arr[minIndex])
            {
                minIndex = rightChildIndex;
            }
            if (minIndex == parentIndex)
            {
                break;
            }

            swap(arr[parentIndex], arr[minIndex]);
            parentIndex = minIndex;
            leftChildIndex = 2 * parentIndex + 1;
            rightChildIndex = 2 * parentIndex + 2;
        }
    }
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
    inplaceHeapSort(arr, n);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "\t";
    }
    return (0);
}