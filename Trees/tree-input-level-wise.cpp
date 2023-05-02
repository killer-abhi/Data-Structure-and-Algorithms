#include <bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;

TreeNode<int> *inputLevelwise()
{
    int rootdata;
    cout << "Enter Root Data :: ";
    cin >> rootdata;
    TreeNode<int> *root = new TreeNode<int>(rootdata);

    queue<TreeNode<int> *> pendingNodes;
    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        pendingNodes.pop();
        cout << "Enter Children Of :: " << front->data<<" :: ";
        int numChild;
        cin >> numChild;
        for(int i=0;i<numChild;i++){
            int childData;
            cout<<"Enter "<<i+1<<" th child of "<<front->data<<" :: ";
            cin>>childData;
            TreeNode <int>* child=new TreeNode<int>(childData);
            front->children.push_back(child);
            pendingNodes.push(child);
        }
    }
    return root;
}
void printLevelWise(TreeNode<int>* root){

    queue<TreeNode<int> *> pendingNodes;

    pendingNodes.push(root);
    while (pendingNodes.size() != 0)
    {
        TreeNode<int> *front = pendingNodes.front();
        cout<<front->data<<" :: ";
        pendingNodes.pop();
        int numChild=front->children.size();
        for(int i=0;i<numChild;i++){
            cout<<front->children[i]->data<<" , ";
            pendingNodes.push(front->children[i]);
        }
        cout<<endl;
    }
}
int main()
{
    TreeNode<int>* root=inputLevelwise();
    printLevelWise(root);
    return (0);
}