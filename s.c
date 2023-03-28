#include<stdio.h>
void swap(int *a, int *b){
    int t;
    t = *a;
    *a = *b;
    *b= t;
     return *a, *b; 



}
void main(){
    int a,b;
    printf("enter value of a:\n");
    scanf("%d",&a);
    printf("enter value of b:\n");
    scanf("%d",&b);
    swap(a,b);

    return 0;

}