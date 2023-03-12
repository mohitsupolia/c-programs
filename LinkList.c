#include <stdio.h>
#include <stdlib.h>
void create();
void display();
struct node{
    int data;
    struct node* next;
};

struct node *head=NULL, *tail=NULL;
int main()
{
    int choice;
    while(1){
        printf("\n create\n");
        printf("\n display\n");
        printf("\n exist\n");
        printf("Enter your choice");
        scanf("%d",&choice);
        switch(choice){
            case 1: 
            create();
            break;
            case 2: 
            display();
            break;
            case 3: 
            exit(0);
            break;
            default:
            printf("Your choice is wrong!!!");
        }
    }
    return 0;
}
void create()
{
    struct node *newnode=NULL;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter value:");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    if(head==NULL)
    {
        head=tail=newnode;
    }
    else{
        tail->next=newnode;
        tail=newnode;
    }
}

void display()
{
    struct node* temp=head;
    printf("Linked List=");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
    }
}
