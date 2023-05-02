#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
string removeDuplicates(string str){
    string output="";
    unordered_map<char,bool> arrMap;
    for(int i=0;i<str.length();i++){
        if(arrMap.count(str[i])>0){
            continue;
        }
        arrMap[str[i]]=true;
        output+=str[i];   
    }
    return output;
}
int main()
{
    string input;
    cin>>input;
    string res=removeDuplicates(input);
    cout<<"Result = "<<res;
    return(0);
}