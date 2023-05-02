#include<bits/stdc++.h>
#include "BinaryTreeNode.cpp"
using namespace std;

pair<int ,int> heightDiameter(BinaryTreeNode<int> *root){
    if(root==NULL){
        pair <int,int> p;
        p.first=0;
        p.second=0;
        return p;
    }
    pair<int,int> leftAns=heightDiameter(root->left);
    pair<int,int> rightAns=heightDiameter(root->right);

    int lh=leftAns.first;
    int ld=leftAns.second;

    int rh=rightAns.first;
    int rd=rightAns.second;

    int height=1+max(lh,rh);
    int diameter=max(lh+rh,max(ld,rd));

    pair<int> p;
    p.first=height;
    p.second=diameter;
    return p;

}
int main()
{
    BinaryTreeNode<int> *root=takeInputLevelWise();
    pair<int,int> p=heightDiameter(root);
    cout<<"\n\n Height :: "<<p.first;
    cout<<"\n\n Diameter :: "<<p.second;
    return(0);
}