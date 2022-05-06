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
// insertion at first
Node* InsertAtBegining(Node* head,int data)
{
    Node* ptr=new Node;
    ptr->data=data;
    ptr->next=head;
    return ptr;
}
// insertion at end
Node* InsertatEnd(Node* head, int data)
{
    Node* ptr = new Node;
    Node* p   = head;
    ptr->data=data;
    while(p->next!=NULL)
    {
        p=p->next;
    }
   
    p->next=ptr;
    ptr->next=NULL;
    return head;
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
    // head = InsertAtBegining(head,4);
   
    head=InsertatEnd(head,56);
    
    cout<<"after insertion"<<endl;
    linkedListTraversal(head);
return 0;
}