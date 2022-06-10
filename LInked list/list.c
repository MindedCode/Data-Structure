#include<stdio.h>
#include<stdlib.h>

struct node 
    {
      int data;
      struct node *link;
    };

    int print(struct node *head)
    {
        while(head!=0){
            printf("Element is %d\n",head->data);
            head=head->link;
        }}
    
    int main(){
    
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *sec = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *fourth = (struct node *)malloc(sizeof(struct node));
    struct node *five = (struct node *)malloc(sizeof(struct node));
    
    head->data = 2;
    head->link = sec;
    
    sec->data = 3;
    sec->link = third; 
    
    third->data = 4;
    third->link = fourth;
    
    fourth->data = 5;
    fourth->link = five;
    
    five->data = 6;
    five->link = 0;
        
        
    // printf("Element is %d \n",head->data);
    // printf("Element is %d \n",sec->data);
    // printf("Element is %d \n",fourth->data);
    // printf("Element is %d \n",five->data);
    print(head);
    }