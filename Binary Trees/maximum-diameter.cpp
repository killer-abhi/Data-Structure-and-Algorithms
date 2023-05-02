#include<bits/stdc++.h>
#include "BinaryTreeNode.cpp"
using namespace std;

int height(BinaryTreeNode<int> *root){
    if(root==NULL){
        return 0;
    }
    return 1+max(height(root->left),height(root->right));
}
int findDiameter(BinaryTreeNode<int> *root){
    if(root==NULL){
        return 0;
    }
    int option1=height(root->left)+height(root->right);
    int option2=findDiameter(root->left);
    int option3=findDiameter(root->right);

    return max(option1,max(option2,option3));
}
int main()
{
    
    BinaryTreeNode <int> *root=takeInputLevelWise();
    int diameter=findDiameter(root);
    cout<<"\n\n Required Diameter = "<<diameter;
    return(0);
}