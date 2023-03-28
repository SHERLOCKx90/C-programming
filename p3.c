#include<stdio.h>
#include<string.h>
int main(){
    char cc[20];
    int z;

    printf("enter the colour code of the resistor:\n");
    scanf("%s",&cc);

    if (!strcmp(cc,"black"))
    {
        z=1;
        printf("appropriate multiplier:%d",z);
    }
    else if (!strcmp(cc,"brown"))
    {
        z=10;
        printf("appropriate multiplier:%d",z);
    }
    else if (!strcmp(cc,"red"))
    {
        z=100;
        printf("appropriate multiplier:%d",z);
    }
    else if (!strcmp(cc,"orange"))
    {
        z=1000;
        printf("appropriate multiplier:%d",z);
    }
    else{
        printf("invalid input");
    }
    return 0;
}