/* Data structure linked list insert element at nth position*/
#include <stdio.h>
#include <stdlib.h>
struct node 
{
    /* data */
    int data; 
    struct node *next;
};




struct  node *insert_at_n(struct  node * head, int pos, int val)
{
    /* data */
    struct node *ptr = head;
    struct node* temp = (struct node*)malloc(sizeof(struct node*));
     
    temp->data=val;
    temp->next=NULL;

    if(pos==1)
    {
        temp->next=head;
        head=temp;
        return head;
    }   
    int i;
    for(i=0; i<pos-2; i++)
    {
        ptr=ptr->next;
    }
    temp->next = ptr -> next;
    ptr->next=temp;
    return head;
}

void print(struct node* head)
{   if(head==NULL)
    printf("NULL");
    
    struct node*  temp = head;
    while(temp!=NULL)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
    return;
}


int main()
{
    struct node* head=NULL;

   head= insert_at_n(head,1,5);
    print(head);
    head=insert_at_n(head,2,7);
    print(head);
   head= insert_at_n(head,1,9);
    print(head);
   head= insert_at_n(head,1,4);
    print(head);
}
