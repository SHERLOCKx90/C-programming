#include<stdio.h>


int main()
{
    int d,m,y,c;
    int i=0;

    printf("enter the day of birth:\n");
    scanf("%d",&d);

    printf("enter the month of birth:\n");
    scanf("%d",&m);

    printf("enter the year of birth:\n");
    scanf("%d",&y);

    printf("enter the current year:\n");
    scanf("%d",&c);
    for (y;y<=c;y++)
    {
        if(((y % 4)==0) && (((y%400)==0) || ((y % 100)!=0)))
        {
            i++;
        }
    }
    printf("the no. of birthdays celebrated by Mr.X: %d\n",i);
    return 0;
}