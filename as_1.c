#include<stdio.h>

int main(){
    int a,b;
    int x;
    float y;
    printf("enter the 15-day salary of the employee:\n");
    scanf("%d",&a);
    printf("enter the no. of days in the month:\n");
    scanf("%d",&b);
    if (b==28){
        y=(a/15);
        x= ((a*2)-(y*2));
        printf("monthly salary of the employee is : %d",x);
    }
    else if (b==29)
    {
       y=(a/15);
       x= ((a*2)-y);
       printf("monthly salary of the employee is : %d",x);
    }
    else if (b==30)
    {
        x= (a*2);
        printf("monthly salary of the employee is : %d",x);
    }
    else if (b==31)
    {
        y=(a/15);
        x= ((a*2)+y);
        printf("monthly salary of the employee is : %d",x);
    }
    
    
    return 0;
}