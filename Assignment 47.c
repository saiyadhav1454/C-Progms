#include<stdio.h>

//pattern 47

int main()
{
    int n;
    printf("Ener the number of rows:");
    scanf("%d",&n);
    
    if(n>26 || n<1){
      printf("invalid number");
    }
    else{
    for(int i=1;i<=n;i++){
        char ch='A';
       for(int j=1;j<=i;j++){
           printf("%c",ch);
           ch++;
       }
       printf("\n");
       }
    }  
    return 0;
} 