#include <bits/stdc++.h>
using namespace std;

template <typename V>
class MapNode
{

public:
    string key;
    V value;
    MapNode *next;

    MapNode(string key, V value)
    {
        this->key = key;
        this->value = value;
        next = NULL;
    }
    ~MapNode()
    {
        delete next;
    }
};

template <typename V>
class ourMap
{
    MapNode<V> **buckets;
    int size;
    int numBuckets;

    int getBucketIndex(string key)
    {
        int hashCode = 0;
        int currentCoeff = 1;
        for (int i = key.length() - 1; i >= 0; i--)
        {
            hashCode += key[i] * currentCoeff;
            hashCode = hashCode % numBuckets;
            currentCoeff *= 37;
            currentCoeff = currentCoeff % numBuckets;
        }
        return hashCode % numBuckets;
    }

    void rehash(){
        MapNode<V>** temp=buckets;
        buckets=new MapNode<V>*[2*numBuckets];

        for(int i=0;i<2*numBuckets;i++){
            buckets[i]=NULL;
        }
        int oldBucketCount=numBuckets;
        numBuckets*=2;
        size=0;

        for(int i=0;i<oldBucketCount;i++){
            MapNode<V>* head=temp[i];
            while(head!=NULL){
                string key=head->key;
                V value=head->value;
                insert(key,value);
                head=head->next;
            }
        }
        for(int i=0;i<oldBucketCount;i++){
            MapNode<V>* head=temp[i];
            delete head;
        }
        delete []temp;
    }
public:
    double loadFactor(){
        return (1.0*size)/numBuckets;
    }
    ourMap()
    {
        size = 0;
        numBuckets = 5;
        buckets = new MapNode<V> *[numBuckets];
        for (int i = 0; i < numBuckets; i++)
        {
            buckets[i] = NULL;
        }
    }
    ~ourMap()
    {
        for (int i = 0; i < numBuckets; i++)
        {
            delete buckets[i];
        }
        delete[] buckets;
    }
    
    int getSize()
    {
        return size;
    }
    void insert(string key, V value)
    {
        int bucketIndex = getBucketIndex(key);
        MapNode<V> *head = buckets[bucketIndex];
        while (head != NULL)
        {
            if (head->key == key)
            {
                head->value = value;
                return;
            }
            head = head->next;
        }
        head = buckets[bucketIndex];
        MapNode<V> *node = new MapNode<V>(key, value);
        node->next = head;
        buckets[bucketIndex] = node;
        size++;
        double loadFactor=(1.0*size)/numBuckets;
        if(loadFactor>0.7){
            rehash();
        }
    }
    V getValue(string key)
    {
        int bucketIndex = getBucketIndex(key);
        MapNode<V>* head=buckets[bucketIndex];

        while(head!=NULL){
            if(head->key==key){
                return head->value;
            }
            head=head->next;
        }
        return 0;
    }
    V remove(string key)
    {
        int bucketIndex = getBucketIndex(key);
        MapNode<V> *head = buckets[bucketIndex];
        MapNode<V> *prev = NULL;

        while (head != NULL)
        {
            if (head->key == key)
            {
                if (prev == NULL)
                {
                    buckets[bucketIndex]=head->next;
                }
                else
                {
                    prev->next = head->next;
                }
                V value=head->value;
                head->next=NULL;
                size--;
                delete head;
                return value;

            }
            prev = head;
            head = head->next;
        }
        return 0;
    }
};
