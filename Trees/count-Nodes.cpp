#include<bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;

int countNode(TreeNode <int> *root){
    int ans=1;
    for(int i=0;i<root->children.size();i++){
        ans+=countNode(root->children[i]);
    }
    return ans;
}

int sumAllNodes(TreeNode <int> *root){
    int sum=0;
    for(int i=0;i<root->children.size();i++){
        sum+=root->children[i]->data;
        sum+=sumAllNodes(root->children[i]);
    }
    return sum;
}

int main()
{
    TreeNode <int> *root=inputLevelwise();
    cout<<"\n \n Nodes in the Tree :: "<<countNode(root);
    cout<<"\n \n Sum Of All Nodes in the Tree :: "<<root->data+sumAllNodes(root);
    return(0);
}