#include<stdio.h>
#include<string.h>

int main(){
    int a,c,p;
    float d;
    char b[10];

    printf("enter the amount of money:\n");
    scanf("%d",&a);
    printf("enter the currency unit:\n");
    scanf("%s",&b);
    if (!strcmp(b, "penny")){
        p=(a*1);
        c= (p/100);
        d=(c*63.55);
        printf("the converted currency is : %f %s\n",d , "rupees");
    }
    if (!strcmp(b, "nickel")){
        p=(a*5);
        c= (p/100);
        d=(c*63.55);
        printf("the converted currency is : %f %s\n",d , "rupees");
    }
    if (!strcmp(b, "dime")){
        p=(a*10);
        c= (p/100);
        d=(c*63.55);
        printf("the converted currency is : %f %s\n",d , "rupees");
    }
    if (!strcmp(b, "quarter")){
        p=(a*25);
        c= (p/100);
        d=(c*63.55);
        printf("the converted currency is : %f %s\n",d , "rupees");
    }
    if (!strcmp(b, "halfdollar")){
        p=(a*50);
        c= (p/100);
        d=(c*63.55);
        printf("the converted currency is : %f %s\n",d , "rupees");
    }
    if (!strcmp(b, "dollar")){
        d=(a*63.55);
        printf("the converted currency is : %f %s\n",d , "rupees");
    }
    return 0;
}