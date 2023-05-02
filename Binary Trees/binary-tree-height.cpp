#include<bits/stdc++.h>
#include "BinaryTreeNode.cpp"
using namespace std;

int findHeight(BinaryTreeNode<int>*root,int height){

    if(root==NULL){
        return 0;
    }
    int leftHeight=height+findHeight(root->left,height);
    int rightHeight=height+findHeight(root->right,height);
    if(leftHeight>rightHeight){
        height=leftHeight;
    }
    else{
        height=rightHeight;
    }
    return height;
    
}
int height(BinaryTreeNode<int> *root){
    if(root==NULL){
        return 0;
    }
    return 1+max(height(root->left),height(root->right));
}
int main()
{
    BinaryTreeNode<int> *root=takeInputLevelWise();
    int height=findHeight(root,1);
    cout<<"\n\n Height Of Tree :: "<<height;   

    return(0);
}