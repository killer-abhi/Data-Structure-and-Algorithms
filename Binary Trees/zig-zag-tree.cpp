#include <bits/stdc++.h>
#include "BinaryTreeNode.cpp"
using namespace std;

void print_ZigZag(BinaryTreeNode<int> *root)
{

    stack<BinaryTreeNode<int> *> s1, s2;
    s1.push(root);
    while (s1.size() != 0)
    {
        while (s1.size() != 0)
        {
            BinaryTreeNode<int> *node = s1.top();
            s1.pop();
            cout << node->data<<"   ";
            if (node->left != NULL)
            {
                s2.push(node->left);
            }
            if (node->right != NULL)
            {
                s2.push(node->right);
            }
        }
        cout<<endl;
        while (s2.size() != 0)
        {
            BinaryTreeNode<int> *childNode = s2.top();
            s2.pop();
            cout << childNode->data<<"   ";
            if (childNode->right != NULL)
            {
                s1.push(childNode->right);
            }
            if (childNode->left != NULL)
            {
                s1.push(childNode->left);
            }
        }
        cout << endl;
    }
}
/// input tree - 1 2 3 4 5 6 7 -1 -1 8 -1 -1 9 -1 -1 -1 -1 10 -1 -1 -1
// 1
// 3 2
// 4 5 6 7
// 9 8
// 10

int main()
{
    BinaryTreeNode<int> *root = takeInputLevelWise();
    cout<<endl;
    print_ZigZag(root);
    return (0);
}