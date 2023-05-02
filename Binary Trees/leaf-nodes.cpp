#include<bits/stdc++.h>
#include "BinaryTreeNode.cpp"
using namespace std;

BinaryTreeNode<int>* printLeafNodes(BinaryTreeNode<int> *root){
    if(root==NULL){
        return NULL;
    }
    if(root->left==NULL&& root->right==NULL){
        cout<<root->data<<'\t';
        return NULL;
    }
    root->left=printLeafNodes(root->left);
    root->right=printLeafNodes(root->right);
    return root;
}

int main()
{
    BinaryTreeNode <int> *root=takeInputLevelWise();
    printLevelWise(root);
    cout<<"\n\n Nodes with No Siblings --- \n\n";
    root=printLeafNodes(root);
    return(0);
}