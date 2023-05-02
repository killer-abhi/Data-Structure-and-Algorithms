#include <bits/stdc++.h>
using namespace std;
int possibleWays(int a, int b)
{
    float exp=1/(float)(b);
    int root = pow(a, exp);
    cout<<root<<endl;
    int possibleWays=0;
    for (int i = 1; i <= root; i++)
    {
        int sum=pow(i,b);
        for(int j=1;j<=i;j++){
            sum=sum+pow(j,b);
            if(sum==a){
                possibleWays++;
            }
        }
    }
    return possibleWays;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << possibleWays(a, b);
    return (0);
}

// Problem Description:
// Given two integers a and b. You need to find and return the count of possible ways in which we can represent the number a as the sum of unique integers raise to the power b.
// For eg. if a = 10 and b = 2, only way to represent 10 as -
// 10 = 1^2 + 3^2

// Hence, answer is 1.
// Note : x^y represents x raise to the power y
// Inout Format :
// Two integers a and b (separated by space)

// Output Format :
// Count

// Constraints :
// 1 <= a <= 10^5
// 1 <= b <= 50

// Sample Input 1 :
// 10 2

// Sample Output 1 :
// 1

// Sample Input 2 :
// 100 2

// Sample Output 2 :
// 3
