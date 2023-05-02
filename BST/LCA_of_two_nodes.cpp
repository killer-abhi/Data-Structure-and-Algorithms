#include <bits/stdc++.h>
#include "BST.cpp"
using namespace std;

BinaryTreeNode<int> *findLCA(BinaryTreeNode<int> *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (root->data == n1 || root->data == n2)
    {
        return root;
    }
    BinaryTreeNode<int> *leftAns = findLCA(root->left, n1, n2);
    BinaryTreeNode<int> *rightAns = findLCA(root->right, n1, n2);
    if (leftAns == NULL && rightAns == NULL)
    {
        return NULL;
    }
    else if (leftAns == NULL || rightAns == NULL)
    {
        if (leftAns == NULL)
        {
            return rightAns;
        }
        else
        {
            return leftAns;
        }
    }
    else
    {
        return root;
    }
}

int main()
{
    BinaryTreeNode<int> *root = takeInputLevelWise();
    cout << "Enter Nodes :: ";
    int n1, n2;
    cin >> n1 >> n2;
    BinaryTreeNode<int> *LCA = findLCA(root, n1, n2);
    if (LCA == NULL)
    {
        cout << "Not Found";
    }
    else
    {
        cout << endl
             << endl
             << LCA->data;
    }
    return (0);
}