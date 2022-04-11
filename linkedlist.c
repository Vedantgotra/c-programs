#include<process.h>
#include<stdlib.h>
#include<stdio.h>
typedef struct lklist
{
    int info;
    struct lklist*next; 
}node;
void main(){
int ch,data;
node *head=NULL,*temp;



while(1){
    printf("Menu\n");
    printf("press 1 for insert an element in a linked list\n");
    printf("press 2 for exit\n");
    printf("Enter Your Choice\n");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("insert at begining\n");
        printf("Enter Element to be insert\n");
        scanf("%d",&data);
        temp=(node*)malloc(sizeof(node));
        temp->info=data;
        if(head!=NULL)
        {
             temp->next=head;
        }
    else{
        temp->next=NULL;
    }
    head=temp;
    printf("node inserted\n");
    
     break;
     case 2:
     exit(0);
    
    default:
        printf("invaid input");
        break;
    }
}
}