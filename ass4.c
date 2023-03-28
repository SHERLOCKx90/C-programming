#include<stdio.h>

int main(){
    int a , *p;
    printf("enter a number :\n");
    scanf("%d",&a);
    p= &a;
    for (int x = 1; x < a; x++)
    {
        *p = x*5;
        printf(*p);    
    }
    printf("\n");
    return 0;
}