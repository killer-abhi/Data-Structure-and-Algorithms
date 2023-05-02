// Tower of Hanoi is a mathematical puzzle where we have three rods and n disks. The objective of the puzzle is to move all disks from source rod to destination rod using third rod (say auxiliary). The rules are :
// 1) Only one disk can be moved at a time.
// 2) A disk can be moved only if it is on the top of a rod.
// 3) No disk can be placed on the top of a smaller disk.

// Print the steps required to move n disks from source rod to destination rod.
// Source Rod is named as 'a', auxiliary rod as 'b' and destination rod as 'c'.

#include <bits/stdc++.h>

using namespace std;

void tower_Of_Hanoi(int n, char S, char D, char A)
{
    if (n == 0)
    {
        return;
    }
    tower_Of_Hanoi(n - 1, S, A, D);
    cout << "Move disk " << n << " from rod " << S << " to rod " << D << endl;
    tower_Of_Hanoi(n - 1, A, D, S);
}

int main()
{
    int n;
    cin >> n;
    tower_Of_Hanoi(n, 'S', 'D', 'A');
    return 0;
}