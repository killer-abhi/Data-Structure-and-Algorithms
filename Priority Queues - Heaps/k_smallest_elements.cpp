#include <bits/stdc++.h>
using namespace std;

vector<int> findKSmallest(int *arr, int n, int k)
{
    priority_queue<int> pq;
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }
    for (int i = k; i < n; i++)
    {
        if (pq.top() > arr[i])
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }

    vector<int> output;
    while(!pq.empty()){
        int element=pq.top();
        output.push_back(element);
        pq.pop();
    }
    return output;
}
int main()
{
    priority_queue<int> pq;
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int k;
    cin >> k;
    vector<int> minElements = findKSmallest(arr, n, k);
    for (int i = 0; i < minElements.size(); i++)
    {
        cout << minElements[i] << "\t";
    }
    return (0);
}