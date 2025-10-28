// editor4
#include<stdio.h>
#include<stdlib.h>
int main(){
    int *a,*b;
    a = (int*) malloc (sizeof(int));
    b = (int*) malloc (sizeof(int));
    scanf("%d %d",a,b);
    if(*a<0|| *b<0){
        printf("Invalid Input");
        return 0;
    }
    printf("%d",*a+*b);
    
}
