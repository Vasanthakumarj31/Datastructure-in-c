// editor1
#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int x;
    int y;
}Node;
int main(){
    int n,num,itr;
    scanf("%d",&n);
    if(n<0){
        printf("Invalid input");
        return 0;
    }
    Node *coor = (Node*) malloc (n*sizeof(Node));
    for(itr=0;itr<n;itr++){
        scanf("%d",&coor[itr].x);
        scanf("%d",&coor[itr].y);
    }
   
    printf("%d %d",coor[0].x+1,coor[0].x+1);
    
    return 0;
}
