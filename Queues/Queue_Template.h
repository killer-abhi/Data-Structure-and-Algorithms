#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Queue
{
 
    T *dataArray;
    int front;
    int rear;
    int size;

public:
    Queue(int totalSize)
    {
        T *ptr = new T[totalSize];
        this->size = totalSize;
        dataArray = ptr;
        front = -1;
        rear=-1;
    }
    void adjustQueue()
    {
        T *newArray = new T[size];
        for (int i = 0; i < rear - front + 1; i++)
        {
            newArray[i] = dataArray[i + front];
        }
        rear = rear - front;
        front = 0;
        dataArray = newArray;
    }
    void enqueue(T data)
    {
        if (front==0 && rear == size - 1)
        {
            cout << "Array Full " << endl;
            return;
        }
        if (front != 0 && rear == size - 1)
        {
            adjustQueue();
        }
        else
        {
            if (front == -1 && rear == -1)
            {
                front = rear = 0;
            }
            else
            {
                rear++;
            }
            dataArray[rear] = data;
        }
        return;
    }
    bool isEmpty(){
        return front==-1;
    }
    T deQueue()
    {
        if (isEmpty())
        {
            cout << "Empty Queue" << endl;
            return -1;
        }
        else
        {
            T element = dataArray[front];
            if (front == rear)
            {
                front = rear = -1;
            }
            else
            {
                front++;
            }
            adjustQueue();
            return element;
        }
    }
    T first(){
        return dataArray[front];
    }
};