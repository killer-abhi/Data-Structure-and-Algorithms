#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
    unordered_map<string,int> ourMap;
    ourMap["abc"]=0;
    ourMap["abc1"]=1;
    ourMap["abc2"]=2;
    ourMap["abc3"]=3;
    ourMap["abc4"]=4;
    ourMap["abc5"]=5;

    unordered_map<string,int>::iterator it=ourMap.begin();

    while(it!=ourMap.end()){
        cout<<"Key :: "<<it->first<<" Value ::"<<it->second<<endl;
        it++;
    }
    unordered_map<string,int>::iterator it2=ourMap.find("abc3");
    ourMap.erase(it2);

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    vector<int>::iterator it1=v.begin();
    while (it1!=v.end())
    {
        cout<<*it1<<endl;
        it1++;
    }
    
    return(0);
}