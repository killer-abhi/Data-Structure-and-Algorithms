// A child is running up a staircase with N steps, 
// and can hop either 1 step, 2 steps or 3 steps at a time. 
// Implement a method to count how many possible ways 
// the child can run up to the stairs. 
// You need to return number of possible ways W.

#include <bits/stdc++.h>
using namespace std;

int countWays(int n){

    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }
    int sum=countWays(n-1)+countWays(n-2)+countWays(n-3);
    return sum;

}
int main()
{
    int n;
    cin >> n;
    int ways=countWays(n);
    cout<<ways<<endl;
    return 0;
}