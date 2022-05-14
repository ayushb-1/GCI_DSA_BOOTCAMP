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

Node* RevRecursion(Node* head){
    
    if(head==NULL || head->next==NULL) {
        return head;
    }
    Node* newhead=RevRecursion(head->next);
    Node* headnext=head->next;
    headnext->next=head;
    head->next=NULL;
    return newhead;
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
    head=RevRecursion(head);
    linkedListTraversal(head);
return 0;
}