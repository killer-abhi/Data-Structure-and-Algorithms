#include<bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;

void printAtLevelK(TreeNode <int> *root,int k){
    if(root==NULL){
        return;
    }
    if(k==0){
        cout<<root->data<<endl;
        return;
    }
    for(int i=0;i<root->children.size();i++){
        printAtLevelK(root->children[i],k-1);
    }
}
int main()
{
    TreeNode <int> *root=inputLevelwise();
    int k=0;
    cout<<"\n\n Enter Level To Print :: ";
    cin>>k;
    printAtLevelK(root,k);
    return(0);
}