#include<stdio.h>

void main(){
    int x, *a;
    printf("enter limit:\n");
    scanf("%d",&x);
    a = &x;
    int y=0 , z=0;
    while (y<= *a)
    {
        printf(z);
        z=z+2;
        y++;
        printf("\n");
        
    }
}