#include<bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;

int treeHeight(TreeNode <int> *root){

    int height=0;
    for(int i=0;i<root->children.size();i++){
        int temp=treeHeight(root->children[i]);
        if(temp>height){
            height=temp;
        }
    }
    return height+1;
}

int main()
{
    TreeNode<int> *root=inputLevelwise();
    cout<<"\n\n Tree Height :: "<<treeHeight(root);
    return(0);
}