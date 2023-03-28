#include<stdio.h>

int main(){
    int a,b;
    printf("enter the number \n");
    scanf("%d",&a);
    if (a%2==0){
         printf("%d is even \n",a);
         if (a>2){
             printf("the no. is greater than 2!");
         }
    }
    return 0;
}
