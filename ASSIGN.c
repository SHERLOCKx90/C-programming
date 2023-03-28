#include<stdio.h>                                                               
                                                                                
void main()
{
    int a, b, *x, *y, prod;
    printf("\nEnter integer a:");
    scanf("%d", &a);
    printf("\nEnter integer b:");
    scanf("%d", &b);
    x = &a;
    y = &b;
    prod = *x * *y;
    printf("\nMultiplication of the numbers: %d", prod);
}