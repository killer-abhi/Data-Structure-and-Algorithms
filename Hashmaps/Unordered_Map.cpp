#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int> ourMap;

    //insert elements in unordered map
    pair<string,int> p("abc",1);
    ourMap.insert(p);
    ourMap["def"]=2;

    //access keys

    cout<<ourMap["abc"]<<endl;
    cout<<ourMap.at("def")<<endl;
    // cout<<ourMap.at("ght")<<endl;
    cout<<ourMap["ghi"]<<endl;
    ourMap.erase("ghi");

    //searching
    if(ourMap.count("ghi")>0){
        cout<<ourMap["ghi"]<<endl;
    }
    //size
    cout<<"Size :: "<<ourMap.size()<<endl;

    ///deleting keys
    ourMap.erase("ghi");
    return(0);
}