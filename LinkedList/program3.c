// editor4
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int data;
    struct node *next;
}Node;

Node *head,*tail,*first,*second;
int cnt = 1;
void create(int num){
    Node *newnode = (Node*) malloc (1*sizeof(Node));
    newnode->data = num;
    newnode->next = NULL;
    if(head==NULL){
        head = newnode;
        tail = newnode;
    }else{
        tail->next = newnode;
        tail = newnode;
    }
}


void deletion(int value){
    first = head;
    second = head->next;
    if(value == head->data){
        head = head->next;
    }
    else{
        
        while(second!=NULL){
            if(second->data==value){
            first->next = second->next;
            break;
            }
        first = first->next;
        second = second->next;
        cnt++;
        }
        
    }
}
void display(){
    Node *itr;
    for(itr=head;itr!=NULL;itr=itr->next){
        printf("%d ",itr->data);
    }
}
int main(){
    int size,itr,val,num;
    scanf("%d",&size);
    if(size <= 0){
        printf("Not Found");
        return 0;
    }
    for(itr =0;itr<size;itr++){
        scanf("%d",&num);
        create(num);
    }
    scanf("%d",&val);
    if(val<0){
        printf("Not Found");
        return 0;
    }
    deletion(val);
    if(head == NULL){
        printf("List is empty");
        return 0;
    }else{
        if(cnt==size){
            printf("Not Found");
            return 0;
        }else{
            display();
        }
        
    }
    return 0;
}
