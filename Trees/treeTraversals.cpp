#include<bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;

void PreOrder(TreeNode <int> *root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<"  ";
    for(int i=0;i<root->children.size();i++){
        PreOrder(root->children[i]);
    }
}
void PostOrder(TreeNode <int> *root){
    if(root==NULL){
        return;
    }
    for(int i=0;i<root->children.size();i++){
        PostOrder(root->children[i]);
    }
    cout<<root->data<<"  ";
}
int main()
{
    TreeNode <int> *root=inputLevelwise();
    cout<<endl<<endl;
    PreOrder(root); 
    cout<<endl<<endl;
    PostOrder(root);  
    return(0);
}