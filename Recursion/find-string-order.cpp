#include<bits/stdc++.h>
using namespace std;

bool findOrder(string str,string find){
    if(find.length()==0){
        return true;
    }
    if(str.length()==0){
        return false;
    }
    if(str[0]==find[0]){
        return(findOrder(str.substr(1),find.substr(1)));
    }
    else{
        return(findOrder(str.substr(1),find));
    }
}
int main()
{
    string str,find;
    str="abchjsgsuohhdhyrikkknddg";
    // cin>>str;
    cin>>find;
    bool res=findOrder(str,find);
    if(res){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return(0);
}