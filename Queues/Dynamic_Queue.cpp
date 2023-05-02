#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Dynamic_Queue
{

    T *dataArray;
    int front;
    int rear;
    int size;

public:
    Dynamic_Queue()
    {

        T *ptr = new T[2];
        this->size = 2;
        dataArray = ptr;
        front = -1;
        rear = -1;
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
        if (front == 0 && rear == size - 1)
        {
            T *newDataArray = new T[2 * size];
            for (int i = 0; i <= rear; i++)
            {
                newDataArray[i] = dataArray[i];
            }
            size *= 2;
            delete[] dataArray;
            dataArray = newDataArray;
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
    bool isEmpty()
    {
        return front == -1;
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
    T first()
    {
        return dataArray[front];
    }
};