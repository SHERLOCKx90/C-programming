#include<stdio.h>
#include<string.h>

int main()
{
    int x, y;
    float z;
    char a[10];

    printf("enter the total fees:\n");
    scanf("%d",&x);

    printf("enter the percentage of marks obtained:\n");
    scanf("%d",&y);

    printf("enter whether first graduate or not (yes/no):\n");
    scanf("%s",&a);

    if (!strcmp(a, "yes")){
        if (y > 90){
            z= (x - ( 0.3 * x) );
            printf("fees to be paid : %f",z);
        }
        else if (y>85)
        {
            z= (x - ( 0.1 * x) );
            printf("fees to be paid : %f",z);
        }
    }
    else if (!strcmp(a, "no"))
    {
        if (y > 90){
            z= (x - ( 0.2 * x ) );
            printf("fees to be paid : %f",z);
        }
    }
    else
    {
        printf("invalid user input");
    }
    return 0;
}