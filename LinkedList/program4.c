
// editor5
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

void insertion(int val,int pos,int size){
    Node *newnode = (Node*) malloc (1*sizeof(Node));
    newnode->data = val;
    newnode->next = NULL;
    
    if(pos==1){
        newnode->next = head;
        head = newnode;
    }
    else if(size+1 == pos){
        tail->next = newnode;
        tail = newnode;
    }
    else{
        Node* temp = head;
        // Node* temp2 = head->next;
        int cnt=2;
        while(temp!=NULL){
            if(cnt == pos){
                 
               newnode->next = temp->next;
               temp->next = newnode;
                
                break;
            }
            temp=temp->next;
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
    int size,itr,num,pos,val;
    scanf("%d",&size);
    for(itr=1;itr<=size;itr++){
        scanf("%d",&num);
        create(num);
    }
    scanf("%d%d",&val,&pos);
    if(pos<1 || pos>size+1){
        printf("Invalid input");
        return 0;
    }
    insertion(val,pos,size);
    display();
    
}
