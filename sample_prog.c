/*#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    unsigned char dh;
    scanf("%c",&ch);
    scanf("%c",&dh);
    printf("c=%d\n",ch);
    printf("d=%d",dh);
    getch();
    return 0;
}*/
#include<stdio.h>
#include<conio.h>
main()
{
    char name[10];
    int age;
    float height;
    char sex[10];
    printf(" Enter the student Name,age,height and sex:\n");
    scanf("%s",&name);
    scanf("%d",&age);
    scanf("%f",&height);
    scanf("%c",&sex);
    printf("The student name is %s\n",name);
    printf("Age %d\n",age);
    printf("Height  %f\n",height);
    printf("Sex  %s\n",sex);
    getch();
}
