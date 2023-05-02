#include<bits/stdc++.h>
#include "BST.cpp"
using namespace std;

bool searchKey(BinaryTreeNode<int> *root,int key){
    if(root==NULL){
        return false;
    }
    if(root->data==key){
        root->data=0;
        return true;
    }
    return searchKey(root->left,key)||searchKey(root->right,key);
}

void findPairSum(BinaryTreeNode<int> *root,BinaryTreeNode<int>* mainRoot,int sum){
    if(root==NULL||root->data==0){
        return;
    }
    int reqKey=sum-root->data;
    if(searchKey(mainRoot,reqKey)){
        cout<<root->data<<"\t"<<reqKey<<endl;
    }
    findPairSum(root->left,mainRoot,sum);
    findPairSum(root->right,mainRoot,sum);
}
int main()
{
    BinaryTreeNode<int>* root=takeInputLevelWise();
    cout<<"Enter Sum ::";
    int sum;
    cin>>sum;
    findPairSum(root,root,sum);
    return(0);
}