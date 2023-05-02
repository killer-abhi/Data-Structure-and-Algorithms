#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

vector<int> findIntersection(int *arr1, int n1, int *arr2, int n2)
{
    vector<int> output;
    unordered_map<int, bool> resMap;
    for (int i = 0; i < n1; i++)
    {
        if (resMap.count(arr1[i]) > 0)
        {
            continue;
        }
        resMap[arr1[i]] = true;
    }
    for (int i = 0; i < n2; i++)
    {
        if (resMap.count(arr2[i]) > 0)
        {
            int count = 1;
            for (int j = 0; j < output.size(); j++)
            {
                if (output[j] == arr2[i])
                {
                    count = 0;
                }
            }
            if (count == 1)
            {
                output.push_back(arr2[i]);
            }
        }
    }
    return output;
}
int main()
{
    int arr1[] = {1, 4, 5, 2, 45, 2, 6, 3, 6, 7};
    int arr2[] = {2, 5, 3, 3, 7, 3};
    int n1 = 10, n2 = 6;
    vector<int> res = findIntersection(arr1, n1, arr2, n2);
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << "\t";
    }
    return (0);
}