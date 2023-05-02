#include<bits/stdc++.h>
#include "TreeNode.cpp"
using namespace std;

class pairSum{
    public:
    int Nodedata;
    int NodeChildSum;
};
pairSum childSum(TreeNode<int> *root){

    pairSum obj1,obj2,ansObj;
    int sum=root->data;

    obj1.Nodedata=root->data;
    
    for(int i=0;i<root->children.size();i++){
        sum=sum+root->children[i]->data;
    }
    obj1.NodeChildSum=sum;
    ansObj=obj1;
    for(int i=0;i<root->children.size();i++){    
        obj2=childSum(root->children[i]);
        if(obj2.NodeChildSum>ansObj.NodeChildSum){
            ansObj= obj2;
        }
    }
    return ansObj;

}
int main()
{
    TreeNode <int> *root=inputLevelwise();
    pairSum ans=childSum(root);
    printLevelWise(root);
    cout<<"Node With Maximum Child Sum :: "<<ans.Nodedata<<"\t"<<ans.NodeChildSum;
    return(0);
}