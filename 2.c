#include<stdio.h>
int formula(int *x, int *y){
    int ans;
    ans=(*x+*y)*(*x-*y);
    return(ans);
}
int main(){
    int a,b;
    printf("enter value of a=");
    scanf("%d",&a);
    printf("enter value of b=");
    scanf("%d",&b);
    printf("the value of a**2 - b**2 = %d", formula(&a,&b));
    return 0;
}