#include <bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;

int findNextLargest(TreeNode<int> *root, int k)
{
    int res=0;
    if(root->data>k){
        res=root->data;
    }

    for (int i = 0; i < root->children.size(); i++)
    {
        int temp = findNextLargest(root->children[i], k);
        if(temp>k){
            // res=min(temp,res);
            res=temp;
        }
    }
    return res;
}

int main()
{
    TreeNode<int> *root = inputLevelwise();
    int k;
    cout << "Enter Number :: ";
    cin >> k;
    int res = findNextLargest(root, k);
    cout << "Next Largest Number :: " << res;
    return (0);
}