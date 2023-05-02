#include <bits/stdc++.h>
#include "BinaryTreeNode.cpp"
using namespace std;

int findNode(BinaryTreeNode<int> *root, int x)
{
    if(root==NULL){
        return 0;
    }
    if (root->data == x)
    {
        return 1;
    }
    int leftNode = findNode(root->left, x);
    int rightNode = findNode(root->right, x);

    return leftNode+rightNode;
}
int main()
{
    BinaryTreeNode<int> *root = takeInputLevelWise();
    int x;
    cout << "Enter Node To Be Searched :: ";
    cin >> x;
    if (findNode(root, x))
    {
        cout << "\n\n Node Found";
    }
    else
    {
        cout << "\n\n Node Not Found";
    }
    return (0);
}