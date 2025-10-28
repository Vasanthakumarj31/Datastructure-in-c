// editor2
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node{
    int no;
    char name[30];
}Node;
int main(){
    int n,num,itr;
    scanf("%d",&n);
    if(n<0){
        printf("Invalid input");
        return 0;
    }
    Node *detail = (Node*) malloc (n*sizeof(Node));
    char *first = (char*) malloc (n*sizeof(char));
    for(itr=0;itr<n;itr++){
        scanf("%d",&detail[itr].no);
        scanf("%[^\n]s",detail[itr].name);
        char *first = strtok(detail[itr].name," ");
        printf("%s\n",first);
    }
    // for(itr=0;itr<n;itr++){
    //     printf("%s",first[itr]);
    //     printf("\n");
    // }
}
