#include<bits/stdc++.h>
#include "BinaryTreeNode.cpp"
using namespace std;

BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int> *root){
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL&& root->right==NULL){
        return NULL;
    }
    root->left=removeLeafNodes(root->left);
    root->right=removeLeafNodes(root->right);
    return root;
}

int main()
{
    BinaryTreeNode <int> *root=takeInputLevelWise();
    root=removeLeafNodes(root);
    printLevelWise(root);
    return(0);
}