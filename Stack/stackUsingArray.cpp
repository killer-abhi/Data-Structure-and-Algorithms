#include<bits/stdc++.h>
using namespace std;

class stackUsingArray{
    int *dataArray;
    int nextIndex;
    int capacity;

    public:

    stackUsingArray( int TotalSize){
        dataArray=new int[TotalSize];
        nextIndex=0;
        capacity=TotalSize;
    }
    int size(){
        return nextIndex;
    }
    bool isEmpty(){
        // if(nextIndex==0){
        //     return true;
        // }
        // else{
        //     return false;
        // }
        return nextIndex==0;
    }
    void push(int element){
        if(nextIndex==capacity){
            cout<<"'\n Stack Full "<<endl;
            return;
        }
        else{
            dataArray[nextIndex]=element;
            nextIndex++;
        }
    }
    int pop(){
        if(isEmpty()){
            cout<<"\n Stack Empty"<<endl;
            return INT_MIN;
        }
        
            nextIndex--;
            return dataArray[nextIndex];
        
    }
    int top(){
        if(!isEmpty()){
            return dataArray[nextIndex-1];
        }
    }
};
