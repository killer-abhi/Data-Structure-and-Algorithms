#include<bits/stdc++.h>
#include "Node.cpp"
using namespace std;

Node* reverseLL(Node *head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    Node *newHead=reverseLL(head->next);
    newHead->next=head;
    head->next=NULL;
    return(head);
}

int main()
{
    Node *head=insert();
    display(head);
    head=reverseLL(head);
    cout<<endl;
    display(head);
    return(0);
}