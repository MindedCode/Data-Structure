#include<stdio.h>
#include<stdlib.h>

// self refrential structure [link]--------------------------------
struct node {
     int data;
     struct node *link;
};

     struct node *add_first(struct node *head, int d)
     {
     struct node *newnode;
     newnode=(struct node *)malloc(sizeof(struct node));

     
     newnode->data=d;
     newnode->link=head;
     head = newnode;
     return head;
}

     int main(){
     struct node *head;
     
     head=(struct node *)malloc(sizeof(struct node));

     head->data=1;
     head->link=NULL;

     struct node *second;
     second= (struct node *)malloc(sizeof(struct node));
     second->data=2;
     second->link=NULL;
     head->link=second;

     int data=3;
     head=add_first(head, data);
     //second=head;
     while(head!=NULL)
     {
          printf("%d\n",head->data);
          head=head->link;
     }
}

