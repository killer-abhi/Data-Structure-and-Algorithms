#include<bits/stdc++.h>
using namespace std;

class DynamicStack{
    int *dataArray;
    int nextIndex;
    int capacity;

    public:

    DynamicStack(){
        dataArray=new int[capacity];
        nextIndex=0;
        capacity=2;
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
            int *newDataArray=new int[capacity*2];
            for(int i=0;i<capacity;i++){
                newDataArray[i]=dataArray[i];
            }
            capacity*=2;
            delete [] dataArray;
            dataArray=newDataArray;
        }
        dataArray[nextIndex]=element;
        nextIndex++;
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
        if(isEmpty()){
            return -1;
        }
        return dataArray[nextIndex-1];
    }

};