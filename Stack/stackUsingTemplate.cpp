#include<bits/stdc++.h>
using namespace std;

template <typename T>

class StackUsingTemplate{
    T *dataArray;
    int nextIndex;
    int capacity;

    public:
    StackUsingTemplate(){
        dataArray=new T[capacity];
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
    void push(T element){
        if(nextIndex==capacity){
            T *newDataArray=new T[capacity*2];
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
    T pop(){
        if(isEmpty()){
            cout<<"\n Stack Empty"<<endl;
            return 0;
        }
        
            nextIndex--;
            return dataArray[nextIndex];
        
    }
    T top(){
        if(isEmpty()){
            return -1;
        }
        return dataArray[nextIndex-1];
    }
};