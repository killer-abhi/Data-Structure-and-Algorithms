#include<bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;

int leafNodes(TreeNode<int> *root){
    if(root==NULL){
        return 0;
    }
    if(root->children.size()==0){
        return 1;
    }
    int ans=0;
    for(int i=0;i<root->children.size();i++){
        ans+=leafNodes(root->children[i]);
    }
    return ans;
}
int main()
{
    TreeNode <int> *root=inputLevelwise();
    cout<<"Total Leaf Nodes :: "<<leafNodes(root);   
    return(0);
}