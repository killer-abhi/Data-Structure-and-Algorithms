#include <bits/stdc++.h>
#include "BinaryTreeNode.cpp"
using namespace std;

pair<int, int> findMin_Max(BinaryTreeNode<int> *root)
{
    pair<int, int> p;
    if (root == NULL)
    {
        p.first = INT_MAX;
        p.second = INT_MIN;
        return p;
    }
    
    p.first = root->data;
    p.second = root->data;

    pair<int, int> leftAns = findMin_Max(root->left);
    pair<int, int> rightAns = findMin_Max(root->right);

    p.first = min(p.first, min(leftAns.first, rightAns.first));
    p.second = max(p.second, max(leftAns.second, rightAns.second));

    return p;
}

int main()
{
    BinaryTreeNode<int> *root = takeInputLevelWise();
    pair<int, int> p = findMin_Max(root);
    cout << "\n\n Minimum Element :: " << p.first;
    cout << "\n Maximum Element :: " << p.second;
    return (0);
}