#include<bits/stdc++.h>
#include "BST.cpp"
using namespace std;

int printAtDistanceK(BinaryTreeNode<int>* root,int K,int key){

    if(root==NULL){
        return -1;
    }
    if(root->data==key){
        printAtDistanceK();
        return 0;
    }
    int leftDist=printAtDistanceK(root->left,K,key);
    if(leftDist+1==K){
        cout<<root->data;
    }
    else{
        printAtDistanceK(root->right,K-leftDist-2,key);
    }
    int rightDist=printAtDistanceK(root->right,K,key);
    if(rightDist+1==K){
        cout<<root->data;
    }
    else{
        printAtDistanceK(root->left,K-rightDist-2,key);
    }
}
int main()
{
    BinaryTreeNode<int> *root=takeInputLevelWise();

    return(0);
}