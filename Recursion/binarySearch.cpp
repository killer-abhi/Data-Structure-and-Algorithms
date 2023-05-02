#include <iostream>
#include <vector>
using namespace std;

int binarySearch(int arr[], int si, int ei, int x)
{
    if (si > ei)
        return si;

    int mi = si + (ei - si) / 2;
    if (arr[mi] == x)
        return mi;

    if (arr[mi] > x)
    {
        return binarySearch(arr, si, mi - 1, x);
    }

    return binarySearch(arr, mi + 1, ei, x);
}

int searchInsert(vector<int> nums, int target)
{
    int si = 0;
    int ei = nums.size() - 1 ;

    while (si <= ei)
    {
        int mi = (si + ei) / 2;
        if (nums.at(mi) == target)
            return mi;

        if (nums.at(mi) > target)
        {
            ei = mi - 1;
            continue;
        }

        si = mi + 1;
    }

    return si;
}

int main()
{
    vector<int> arr;

    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(5);
    arr.push_back(6);

    int target = 2;
    // cin >> target;

    cout << searchInsert(arr, target) << endl;
    return 0;
}