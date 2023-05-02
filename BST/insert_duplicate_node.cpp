#include<bits/stdc++.h>
#include "BST.cpp"
using namespace std;

BinaryTreeNode<int>* duplicateNodesInsertion(BinaryTreeNode<int>* root){
    if(root==NULL){
        return NULL;
    }
    BinaryTreeNode<int>* duplicateNode=new BinaryTreeNode<int>(root->data);
    duplicateNode->left=duplicateNodesInsertion(root->left);
    root->right=duplicateNodesInsertion(root->right);
    
    root->left=duplicateNode;
    return root;
}

int main()
{
    BinaryTreeNode<int>* root=takeInputLevelWise();
    printLevelWise(root);
    root=duplicateNodesInsertion(root);
    cout<<endl<<endl;
    printLevelWise(root);
    return(0);
}