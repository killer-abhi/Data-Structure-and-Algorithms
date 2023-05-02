//removes a character from a string by recursion

#include<bits/stdc++.h>
using namespace std;

string removeX(string str,char ch){
    if(str.length()==0){
        return "";
    }
    if(str[0]==ch||str[0]==ch){
        str[0]='\0';
    }
    return(str[0]+removeX(str.substr(1),ch));
}

int main(){
    string str;
    cin>>str;
    char ch; //character to be removed
    cin>>ch; 
    cout<<removeX(str,ch);
    return 0;
}