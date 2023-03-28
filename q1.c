/*ramesh's basic salary*/
#include<stdio.h>
int main()
{
    int basic, allowance, rent, gross ;

    printf("enter your basic salary :");
    scanf("%d",&basic);

    allowance = 40 * basic / 100 ;
    rent = 20 * basic / 100 ;
    gross = basic + allowance + rent ;

    printf("the gross salary is : %d",gross) ;
    return 0;

}