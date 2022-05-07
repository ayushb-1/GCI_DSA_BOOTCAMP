Node* DeletionatNth(Node* head,int index)
{
    Node* p = new Node;
    p=head;
    int i;
    while(i!=index-1)
    {
    p=p->next;
    i++;
    }
    Node* q=p->next;
    p=q->next;
    free(q);

    
    
    return head;
} 