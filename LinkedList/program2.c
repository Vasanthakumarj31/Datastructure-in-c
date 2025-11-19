// editor2
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}Node;
Node *head = NULL,*tail;

void create(int num){
    Node *newnode = (Node*) malloc (1*sizeof(Node));
    newnode->data = num;
    newnode->next = NULL;
    if(head==NULL){
        head = newnode;
        tail = newnode;
    }
    else{
        tail->next = newnode;
        tail = newnode;
    }
}
void deletion(int pos){
    Node *first  = head;
    Node *second = head->next;
    int cnt = 1;
    while(1){
        if(pos == cnt){
            first->next = second->next;
            break;
        }
        first = first->next;
        second = second->next;
        cnt++;
    }
}

void display(){
    Node *itr;
    for(itr=head;itr!= NULL;itr = itr->next)
    {
        printf("%d ",itr->data);
        
    }
}

int main(){
    int num,size,ind,pos,itr;
    scanf("%d",&size);
    if(size<0){
        printf("Invalid input");
        return 0;
    }
    
    for(itr=1;itr<=size;itr++){
        scanf("%d",&num);
        create(num);
    }
    scanf("%d",&pos);
    if(pos<1||pos>=size){
        printf("Invalid input");
        return 0;
    }
    deletion(pos);
    display();
    return 0;
   
}
