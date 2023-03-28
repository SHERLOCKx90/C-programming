#include<stdio.h>

int main(){
    int x;
    printf("enter a number:");
    scanf("%d",&x);
    if ((x>0) && (x<=10)){
        printf("Blue");
    }
    else if((x>0) && (x<=20)){
        printf("Red");
    }
    else if ((x>20) && (x<30))
    {
        printf("green");
    }
    else{
        printf("not a correct colour option");
    }
    return 0;
}