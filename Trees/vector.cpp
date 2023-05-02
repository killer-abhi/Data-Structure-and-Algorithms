#include<bits/stdc++.h>
using namespace std;
int main()
{
    // vector <int> *vp=new vector<int>(); //dynamic vector allocation
    vector<int> v; //static vector allocation
    
    //insert elements in vector

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout<<v[0]<<endl;
    cout<<v[1]<<endl;   
    cout<<v.at(1)<<endl;   
    cout<<v[2]<<endl;
    cout<<v.at(2)<<endl;   
    cout<<"Size ::" <<v.size()<<endl;   
    v.pop_back();
    cout<<"Size ::" <<v.size()<<endl;   
    cout<<"Capacity ::" <<v.capacity()<<endl;   
    return(0);
}