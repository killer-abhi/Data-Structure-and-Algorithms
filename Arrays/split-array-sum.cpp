// Problem Statement: Split Array
// Problem Level: MEDIUM
// Problem Description:
// Given an integer array A of size N, check if the input array can be splitted in two parts such that -
// - Sum of both parts is equal
// - All elements in the input, which are divisible by 5 should be in same group.
// - All elements in the input, which are divisible by 3 (but not divisible by 5) should be in other group.
// - Elements which are neither divisible by 5 nor by 3, can be put in any group.

// Groups can be made with any set of elements, i.e. elements need not to be continuous. And you need to consider each and every element of input array in some group.
// Return true, if array can be split according to the above rules, else return false.
// Note : You will get marks only if all the test cases are passed.
// Input Format :
// Line 1 : Integer N (size of array)
// Line 2 : Array A elements (separated by space)

// Output Format :
// true or false

#include <bits/stdc++.h>
using namespace std;

int checkSum(int arr[], int n, int diff)
{
    // cout<<n<<endl;
    for (int i = 0; i < n; i++)
    {

        for (int j = i; j < n; j++)
        {

            int sum1 = 0, sum2 = 0;
            for (int k = 0; k < n; k++)
            {
                if (k >= i && k <= j)
                {
                    sum1 += arr[k];
                }
                else
                {
                    sum2 += arr[k];
                    // cout<<arr[k];
                }
            }
            // cout<<"\nDiff = "<<diff<<"\t sum1 "<<sum1<<" \tsum2 = "<<sum2<<endl;
            if(sum1+diff==sum2 || sum2+diff==0){
                return 1;
            }
        }
    }
    return 0;
}
int splitArray(int arr[], int n)
{
    int sum3 = 0, sum5 = 0, restSum = 0, count = 0;
    int div = 0;
    int rest[n];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 3 == 0 && arr[i] % 5 != 0)
        {
            sum3 += arr[i];
            div++;
        }
        else if (arr[i] % 5 == 0)
        {
            sum5 += arr[i];
            div++;
        }
        else
        {
            restSum += arr[i];
            rest[count] = arr[i];
            count++;
        }
    }
    int diff = abs(sum3) - abs(sum5);
    // cout << diff << endl;
    // for (int i = 0; i < count; i++)
    // {
    //     cout << rest[i] << "\t";
    // }
    return(checkSum(rest, count, diff));
}
int main()
{
    int n;
    // cin>>n;
    n = 8;
    // int arr[n] = {3, 3, 9, 10, 8, 7, 2, 8};
    int arr[3] = {1,3,4};
    if (splitArray(arr, 3))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return (0);
}