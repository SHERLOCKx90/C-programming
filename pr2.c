#include<stdio.h>

int main(){
    char roll_num[100],sub_1[100],sub_2[100],sub_3[100],sub_4[100],sub_5[100];
    char total_marks[100],final_percentage[100];
    int mark_1,mark_2,mark_3,mark_4,mark_5,i=0,j=0;
    while (i<=59)
    {
        printf("enter the student roll number :",i+1);
        scanf("%d",&roll_num[i]);
        printf("enter the marks in subject 1 :");
        scanf("%d",&sub_1[i]);
        printf("enter the marks in subject 2 :");
        scanf("%d",&sub_2[i]);
        printf("enter the marks in subject 3 :");
        scanf("%d",&sub_3[i]);
        printf("enter the marks in subject 4 :");
        scanf("%d",&sub_4[i]);
        printf("enter the marks in subject 5 :");
        scanf("%d",&sub_5[i]);
        total_marks[i]=sub_1[i]+sub_2[i]+sub_3[i]+sub_4[i]+sub_5[i];
        final_percentage[i]=total_marks[i]/5;
        i++;
    }
    printf("%15s%15s%15s%15s%15s%15s%15s%15s%20s\n","roll number","subject 1","subject 2","subject 3","subject 4","subject 5", "total marks","final percentage");
    while (j<=59)
    {
        printf("%15d%15d%15d%15d%15d%15d%15d%20d\n",roll_num[j],sub_1[j],sub_2[j],sub_3[j],sub_4[j],sub_5[j],total_marks[j],final_percentage[j]);
        j++;
    }
    return 0;
}