#include<bits/stdc++.h>
#include "BST.cpp"
using namespace std;

int replace(BinaryTreeNode<int> *root,int sum){
    if(root==NULL){
        return 0;
    }

    int rootData=root->data;
    int rightSum=root->data+replace(root->right,sum);
    
    root->data=rootData+sum+rightSum;
    
    int leftSum=replace(root->left,root->data+rightSum);
    
    return leftSum;
}
int main()
{
    BinaryTreeNode<int>* root=takeInputLevelWise();
    int sum=replace(root,0);
    cout<<endl<<endl;
    printLevelWise(root);
    // printTree(root);
    return(0);
}