#include<stdio.h>
#include<string.h>
int main(){
    char a[10];

    printf("state whether plugged in or not:\n");
    scanf("%s",&a);


    if(strcmp(a, "in")){
        printf("display running on NVDIA RTX 3050 GPU\n");
    }
    else if (strcmp(a,"out"))
    {
        printf("display running on INTEL UHD Graphics\n");
    }
    else{
        printf("the display is currently off.");
    }
    return 0;
}

