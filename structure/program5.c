// editor5
#include<stdio.h>
#include<stdlib.h>
int main(){
    
    
    int n,*num,itr;
    scanf("%d",&n);
    if(n<0){
        printf("Invalid input");
        return 0;
    }
    
    num = (int*) malloc (n*sizeof(int));
    for(itr=0;itr<n;itr++){
        if(!scanf("%d",&num[itr])){
            printf("Invalid input");
            return 0;
        }
        
    }
    for(itr=0;itr<n;itr++){
        printf("%d ",2*num[itr]);
    }
}
