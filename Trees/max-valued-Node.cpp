#include<bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;

int findLargest(TreeNode<int> *root){
    int max=INT_MIN;
    if(root->data>max){
        max=root->data;
    }
    for(int i=0;i<root->children.size();i++){
        int temp=findLargest(root->children[i]);
        if(temp>max){
            max=temp;
        }
    }
    return max;
}

int main()
{
    TreeNode<int> *root=inputLevelwise();
    int max=findLargest(root);
    cout<<"\n\n Maximum Number :: "<<max;
    return(0);
}