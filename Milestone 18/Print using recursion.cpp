#include<iostream>
#include<stdlib.h>
using namespace std;
 
class Node{
public:
        int data;
        class Node *next;
};
void Print(Node *ptr)
{
    if(ptr==NULL) return;
   Print(ptr->next);
   cout<<ptr->data<<" "; 

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

    
    Print(head);
return 0;
}