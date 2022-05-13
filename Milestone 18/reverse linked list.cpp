#include<iostream>
#include<stdlib.h>
using namespace std;
 
class Node{
public:
        int data;
        class Node *next;
};
void linkedListTraversal(class Node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<"Element :"<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
Node* Reverse(Node *head)
{
    Node* prev=NULL;
    Node* curr=head;
    Node* next;
    while(curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        curr=next;
        prev=curr;
    }
    return prev;
}   

int main(){
    class Node *head;
    class Node *second;
    class Node *third;

    head   = new Node;
    second = new Node;
    third  = new Node;

    head->data=7;
    head->next=second;
    second->data=8;
    second->next=third;
    third->data=11;
    third->next=NULL;

    
    linkedListTraversal(head);
    head=Reverse(head);
    
    linkedListTraversal(head);
}