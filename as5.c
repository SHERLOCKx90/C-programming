#include<stdio.h>

int main(){
    int p, n;
    float r, si;

    printf("enter the simple interest amt. :\n");
    scanf("%f",&si);

    printf("enter no. of yrs :\n");
    scanf("%d",&n);

    printf("enter the rate of interest :\n");
    scanf("%f",&r);

    p= ( si * 100 ) / ( n * r );
    printf("the principal amount = %d:\n", p);
    return 0;
}