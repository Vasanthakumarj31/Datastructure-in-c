// editor3
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,m,**mat;
    scanf("%d%d",&m,&n);
    if(n<0 || m<0){
        printf("Invalid input");
        return 0;
    }
    mat = (int**) malloc (m *sizeof(int*));
    for(int i = 0;i<m;i++){
        mat[i] = (int*) malloc (n*sizeof(int));
    }
    for(int itr=0;itr<m;itr++){
        for(int i=0;i<n;i++){
            scanf("%d",&mat[itr][i]);
        }
    }
    int arr[20];
        
      for(int itr=0;itr<m;itr++){
        int sum = 0;
        for(int i=0;i<n;i++){
            sum = sum + mat[itr][i];
        }
        arr[itr] = sum;
    }
    int index = arr[0],cnt=0;
   for(int itr=0;itr<m;itr++){
       if(arr[itr]>index){
           index = arr[itr];
       }
       
   }
   for(int i=0;i<m;i++){
       if(index==arr[i]){
           printf("%d",i);
       }
   }
    
}
