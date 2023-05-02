#include<bits/stdc++.h>
#include "BinaryTreeNode.cpp"
using namespace std;

int height(BinaryTreeNode<int> *root){
    if(root==NULL){
        return 0;
    }
    int leftAns=height(root->left);
    int rightAns=height(root->right);
    return 1+max(leftAns,rightAns);
}
int checkBalance(BinaryTreeNode<int> *root){
    if(root==NULL){
        return 0;
    }
    int leftHeight=height(root->left);
    int rightHeight=height(root->right);

    int balanceFactor=abs(leftHeight-rightHeight);
    if(balanceFactor>1){
        return 0;
    }
    else{
        return 1;
    }

    int leftAns=checkBalance(root->left);
    int rightAns=checkBalance(root->right);
    
    return leftAns&&rightAns;
}
int main()
{
    BinaryTreeNode<int> *root=takeInputLevelWise();
    if(checkBalance(root)){
        cout<<"\n\n Tree Is Balanced ";
    }
    else{
        cout<<"\n\n Tree is not balanced";
    }
    return(0);
}