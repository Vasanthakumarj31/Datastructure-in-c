// editor1
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}Node;

Node *head=NULL,*tail;

void create(int num){
    Node *newnode = (Node*) malloc (1 * sizeof(Node));
    newnode->data = num;
    newnode->next = NULL;
    if(head == NULL){
        head = newnode;
        tail = newnode;
    }
    else{
        tail->next = newnode;
        tail = newnode;
    }
}

void display(){
    Node *itr;
    for(itr=head;itr!=NULL;itr=itr->next){
        printf("%d ",itr->data);
    }
}
int main(){
    int size,itr,num;
    scanf("%d",&size);
    if(size<0){
        printf("Invalid input");
        return 0;
    }
    for(itr=0;itr<size;itr++){
        if(!scanf("%d",&num)){
            printf("Invalid input");
            return 0;
    }
    create(num);
    }
    display();
    return 0;
    
        
}
