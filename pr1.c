#include<stdio.h>
void input(double inputs[15][12]);
void total(double inputs[15][12]);
int main(){
    double inputs[15][12];
    int i,j;
    input(inputs);
    total(inputs);
}
void total(double inputs[15][12]){
    double total=0;
    double expenses=0;
    int i;
    for (i = 0; i < 12; i++)
    {
        total+=inputs[i][1];
    }
    printf("the total for rent this year is %.2lf\n",total);
    expenses=total;
    total=0;
    for (i = 0; i < 12; i++)
    {
        total+=inputs[i][2];
    }
    printf("the total for electricity this year is %.2lf\n",total);
    expenses=expenses+total;
    total=0;
    printf("the total expenses this year were %.2lf\n",total);    
}

void input(double inputs[15][12]){
    int i=0;
    while (i<12)
    {
        printf("enter the rent for the month %hi:",i+1);
        i+=1;
    }
    i=0;
    while (i<12)
    {
        printf("enter the electricity for the month %hi:",i+1);
        scanf("%lf",&inputs[i][2]);
        i+=1;
    }
}