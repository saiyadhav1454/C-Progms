#include<stdio.h>

//pattern 53

int main()
{
    int n;
    printf("Enter the number of lines:");
    scanf("%d",&n);
    
    if(n%2==0){
      printf("not possible");
    }
    else{
    n=(n+1)/2;
    for(int i=1;i<=n;i++){
       for(int j=1;j<=(n-i);j++){
           printf(" ");
       }
       for(int k=1;k<=(2*i-1);k++){
           printf("*");
       }
       printf("\n");
    }
    for(int i=1;i<=(n-1);i++){
        for(int j=1;j<=i;j++){
           printf(" ");
        }
        for(int k=1;k<=(2*(n-i)-1);k++){
            printf("*");
        }
        printf("\n");
    }
    }
    return 0;
}