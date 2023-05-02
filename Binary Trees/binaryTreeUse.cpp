#include<bits/stdc++.h>
#include "BinaryTreeNode.cpp"
using namespace std;
int main()
{
    BinaryTreeNode<int> *root=takeInputLevelWise();
    printLevelWise(root);
    delete root;
    return(0);
}