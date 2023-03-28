#include<stdio.h>

int main(){
    char fname[20], lname[20];

    printf("enter your first name:\n");
    scanf("%s",&fname);
    printf("enter your last name:\n");
    scanf("%s",&lname);

    printf("your name is :\n");
    printf("%s %s", fname , lname);
    return 0;

}