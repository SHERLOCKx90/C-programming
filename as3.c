#include<stdio.h>
#include<string.h>

int main(){
    float a,c;
    char b[10];
    printf("enter the distance:\n");
    scanf("%f",&a);
    printf("enter the given unit of measurement\n");
    scanf("%s",&b);
    if (!strcmp(b, "km")){
        c=(a*0.621371);
        printf("the given distance is: %f %s\n",a,b);
        printf("the converted distance is: %f %s\n",c,"miles");
    }
    else if (!strcmp(b, "miles")){
        c=(a*1.60934);
        printf("the given distance is: %f %s\n",a,b);
        printf("the converted distance is: %f %s\n",c,"km");
    }
    return 0;
}