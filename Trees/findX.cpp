#include<bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;

int findX(TreeNode<int> *root,int x){
    int ans=0;
    for(int i=0;i<root->children.size();i++){
        if(root->children[i]->data==x){
            return 1;
        }
        ans=ans+findX(root->children[i],x);
    }
    return ans;
}

int main()
{
    TreeNode <int> *root=inputLevelwise();
    int x;
    cout<<"\nEnter X ::";
    cin>>x;
    int res=findX(root,x);
    if(res){
        cout<<"Node Found"<<endl;
    }
    else{
        cout<<"Node Not Found";
    }
    return(0);
}