#include<stdio.h>
#include<conio.h>
#include<string.h>
void sub_string(char *s,int start,int end){
    int i;
    for ( i = start; i <= end; i++)
    {
        printf("%c",s[i]);
    }
    
}
int main(){
    char str[100];
    int s,e;
    clrscr();
    printf("enter a string :");
    gets(str);

    printf("enter the starting index:");
    scanf("%d",&s);

    printf("enter the last index:");
    scanf("%d",&e);

    if ((e>strlen(str)) || (s> strlen(str))) 
    {
        printf("starting or end value of index is out of range");
    }
    
    else{
        sub_string(str,s,e);
    }
    getch();
    return 0;
}