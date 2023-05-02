#include<bits/stdc++.h>
#include "BinaryTreeNode.cpp"
using namespace std;

void inorder(BinaryTreeNode<int> *root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<"  ";
    inorder(root->right);
}
void preorder(BinaryTreeNode<int> *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"  ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(BinaryTreeNode<int> *root){
    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"  ";
}

int main()
{
    BinaryTreeNode<int> *root=takeInputLevelWise();    
    cout<<"\n\n";
    inorder(root);
    cout<<endl<<endl;
    preorder(root);
    cout<<endl<<endl;
    postorder(root);
    return(0);
}