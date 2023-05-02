#include<bits/stdc++.h>
#include "BinaryTreeNode.cpp"
using namespace std;

int countNodes(BinaryTreeNode<int> *root){
    if(root==NULL){
        return 0;
    }
    int leftNodes=countNodes(root->left);
    int rightNodes=countNodes(root->left);
    return(leftNodes+rightNodes+1);
}

int main()
{
    BinaryTreeNode <int> *root=takeInputLevelWise();
    printLevelWise(root);
    int nodes=countNodes(root);
    cout<<"\n\n Total Nodes = "<<nodes;
    return(0);
}