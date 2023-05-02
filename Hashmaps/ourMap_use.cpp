#include<bits/stdc++.h>
#include "ourMap.h"
using namespace std;
int main()
{
    ourMap<int> map;
    for(int i=0;i<10;i++){
        char c='0'+i;
        string key="abc";
        key=key+c;
        int value=i+1;
        map.insert(key,value);
        // cout<<map.loadFactor()<<endl;
    }
    for(int i=0;i<10;i++){
        char c='0'+i;
        string key="abc";
        key=key+c;
        cout<<key<<"\t"<<map.getValue(key)<<endl;
    }
    cout<<map.getSize()<<endl;
    map.remove("abc3");
    map.remove("abc7");
    cout<<map.getSize()<<endl;
    for(int i=0;i<10;i++){
        char c='0'+i;
        string key="abc";
        key=key+c;
        cout<<key<<"\t"<<map.getValue(key)<<endl;
    }
    cout<<map.getSize()<<endl;
    return(0);
}