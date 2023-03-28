/*#include<stdio.h>
int main(){
    printf("Subscribe Now!");
    return 0;

    %d %s %c %f %lf
}*/

#include<stdio.h>
int main(){
    char a[20],b[20];

    printf("enter your school name :");
    scanf("%s",&a);

    printf("enter your address :");
    scanf("%s",&b);

    printf("your %s is only 4kms away from your address at %s",a,b);
    return 0;
}