#include <bits/stdc++.h>
#include "BST.cpp"
using namespace std;

void printPath(BinaryTreeNode<int> *root, int sum, vector<int> path)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL && root->data == sum)
    {
        path.push_back(root->data);
        for (int i = 0; i < path.size(); i++)
        {
            cout << path[i] << "\t";
        }
        cout << endl;
        return;
    }

    int leftSum = sum - root->data;
    path.push_back(root->data);
    printPath(root->left, leftSum, path);
    printPath(root->right, leftSum, path);
}
int main()
{
    BinaryTreeNode<int> *root = takeInputLevelWise();
    cout << "\n\nEnter Sum To Find A Path :: ";
    int sum;
    cin >> sum;
    vector<int> path;
    printPath(root, sum, path);
    return (0);
}