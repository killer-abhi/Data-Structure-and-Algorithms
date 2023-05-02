#include <bits/stdc++.h>
using namespace std;

int squaresSum(int n)
{
    if (n <= 3)
    {
        return n;
    }

    int *ans = new int[n + 1];
    ans[0] = 0;
    ans[1] = 1;
    ans[2] = 2;
    ans[3] = 3;

    for(int i=4;i<=n;i++){
        ans[i]=INT_MAX;

        for(int j=1;j<)
    }
}
int main()
{
    int n;
    cin >> n;
    cout << squaresSum(n);
    return (0);
}