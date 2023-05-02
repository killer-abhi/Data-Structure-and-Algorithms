#include <bits/stdc++.h>
using namespace std;

class PriorityQueue
{
    vector<int> data;

public:
    PriorityQueue()
    {
    }
    bool isEmpty()
    {
        return data.size() == 0;
    }
    int getSize()
    {
        return data.size();
    }
    int getMin()
    {
        if (isEmpty())
        {
            return 0;
        }
        return data[0];
    }

    void insert(int element)
    {
        data.push_back(element);
        int childIndex = data.size() - 1;
        while (childIndex > 0)
        {
            int parentIndex = (childIndex - 1) / 2;
            if (data[childIndex] < data[parentIndex])
            {
                swap(data[childIndex], data[parentIndex]);
            }
            else
            {
                break;
            }
            childIndex = parentIndex;
        }
    }
    int removeMin()
    {
        int ans=data[0];
        int lastIndex = getSize() - 1;
        swap(data[lastIndex], data[0]);
        data.pop_back();

        int parentIndex = 0;
        int leftChildIndex = 2 * parentIndex + 1;
        int rightChildIndex = 2 * parentIndex + 2;

        while (leftChildIndex < getSize())
        {
            int minIndex=parentIndex;
            if (data[minIndex]>data[leftChildIndex])
            {
                minIndex = leftChildIndex;
            }
            if(rightChildIndex<getSize()&&data[rightChildIndex]<data[minIndex])
            {
                minIndex = rightChildIndex;
            }
            if(minIndex==parentIndex){
                break;
            }

            swap(data[parentIndex], data[minIndex]);
            parentIndex = minIndex;
            leftChildIndex = 2 * parentIndex + 1;
            rightChildIndex = 2 * parentIndex + 2;   
        }
        return ans;
    }

    void printTree(){
        for(int i=0;i<getSize();i++){
            cout<<data[i]<<"\t";
        }
    }
};