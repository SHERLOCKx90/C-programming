#include<stdio.h>
#include<string.h>
int main(){
    char snt[500];
    scanf("%[^\n]s",&snt);
    int c=0;
    int w=0;
    int l=0;
    for (int i = 0; i < strlen(snt); i++)
    {
        if(snt[i]==*" "){
            w+=1;
        }
        else if (snt[i]==*"\n")
        {
            l++;
        }
        c++;   
    }
    w++;
    l++;
    printf("no. of words:%d\n",w);
    printf("no. of char:%d\n",c);
    printf("no. of lines:%d\n",l);
    return 0;
}