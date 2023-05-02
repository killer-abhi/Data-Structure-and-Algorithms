#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

vector<int> findConsecutive(int *arr, int size)
{
    unordered_map<int, bool> arrMap;

    // insert all elements into hash map
    for (int i = 0; i < size; i++)
    {
        arrMap[arr[i]] = true;
    }
    vector<int> output;
    // for (int i = 0; i < size; i++)
    // {
    //     int cur_length = 1;
    //     int cur_value = arr[i];
    //     vector<int> elements;
    //     while (arrMap.count(++cur_value))
    //     {
    //         elements.push_back(cur_value);
    //         cur_length++;
    //     }
    //     while (arrMap.count(--cur_value))
    //     {
    //         elements.push_back(cur_value);
    //         cur_length++;
    //     }
    //     if (cur_length > output.size())
    //     {
    //         output = elements;
    //     }
    // }

    int maxLength = 0;
    for (int i = 0; i < size; i++)
    {
        if (arrMap.find(arr[i] - 1) == arrMap.end())
        {
            // this is the start of a consecutive sequence
            int currentLength = 1;
            int currentElement = arr[i];

            while (arrMap.find(currentElement + 1) != arrMap.end())
            {
                output.push_back(currentElement);
                currentElement++;
                currentLength++;
            }

            maxLength = max(maxLength, currentLength);
        }
    }
    return output;
}

int main()
{
    int n;
    cout << "Enter Size :: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<int> res = findConsecutive(arr, n);
    cout << "\n\n Maximum Size :: " << res.size() << endl
         << endl;
    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << "\t";
    }
    return (0);
}