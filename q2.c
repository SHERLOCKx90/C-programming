#include<stdio.h>
int main()
{
    int p, n;
    int r;
    float si;

    /*user input statements are writtem first!*/

    printf("enter the principle amt :");
    scanf("%d",&p);
    printf("enter the no.of yrs :");
    scanf("%d",&n);
    printf("enter the rate of interest :");
    scanf("%d",&r);

    /*now evaluating the simple interest formula*/

    si= p*n*r / 100;
    printf("the simple interest : %f",si);
    return 0;


}