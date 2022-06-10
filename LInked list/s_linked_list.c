#include<stdio.h>
#include<stdlib.h>
struct container_node{
     int data;
     struct container_node *link;
};

void display_linked(struct container_node *ptr){
     while(ptr!=NULL){
          printf("%d\n",ptr->data);
          ptr=ptr->link;      //  condition is terminated
     }
}

int main(){
     // struct container_node *head=NULL;
     struct container_node *head;
     struct container_node *second;
     struct container_node *third;

     // Allocate heap memory
     head = (struct container_node*)malloc(sizeof(struct container_node)); 
     second=(struct container_node*)malloc(sizeof(struct container_node));
     third=(struct container_node*)malloc(sizeof(struct container_node));

     head->data=1;
     head->link=second;

     second->data=2;
     second->link=third;

     third->data=3;
     third->link=NULL;

     // printf("Element %d\n",head->data);
     // printf("Element %d ",second->data); 


     display_linked(head);
     // void display_linked(struct container_node *ptr){
     //      while(head!=NULL){
     //      printf("%d\n",head->data);
     //      head=head->link;      //  condition is terminated
     // }
}