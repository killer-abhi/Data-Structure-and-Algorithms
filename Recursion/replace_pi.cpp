//replaces pi with 3.14 in a string by recursion

#include<bits/stdc++.h>
using namespace std;

string replace_pi(string str)
{
    if(str.length()==0){
        return "";
    }
    if(str[0]=='p' && str[1]=='i'){
        
        int len=str.length();
        str="3.14"+replace_pi(str.substr(2));
    }
    return(str[0]+replace_pi(str.substr(1)));
}
int main(){
    string str;
    cin>>str;
    // string substr=str.substr(2,-2+str.length());
    // cout<<substr;
    string newstr=replace_pi(str);
    cout<<endl<<newstr<<"\t"<<newstr.length();
    return 0;
}