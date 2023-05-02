#include<bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;

void replaceWithDepth(TreeNode <int> *root,int depth){

    root->data=depth;
    depth++;
    for(int i=0;i<root->children.size();i++){
        replaceWithDepth(root->children[i],depth);
    }
}

int main()
{
    TreeNode <int> *root=inputLevelwise();
    printLevelWise(root);
    int depth=0;
    replaceWithDepth(root,depth);
    printLevelWise(root);
    return(0);
}