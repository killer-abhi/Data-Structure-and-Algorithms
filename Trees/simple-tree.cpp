#include<bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;
int main()
{
    TreeNode <int> *root=new TreeNode<int>(10);
    TreeNode <int> *node1=new TreeNode<int>(2);
    TreeNode <int> *node2=new TreeNode<int>(3);

    root->children.push_back(node1);
    root->children.push_back(node2); 
    return(0);
}