#include<stdio.h>
int main()
{
    int p, n;
    float r, si;

    printf("enter the principle amt. :\n");
    scanf("%d",&p);

    printf("enter no. of yrs :\n");
    scanf("%d",&n);

    printf("enter the rate of interest :\n");
    scanf("%f",&r);

    si= p * n * r / 100;
    printf("the simple interest value = %f\n", si);
    return 0;
}