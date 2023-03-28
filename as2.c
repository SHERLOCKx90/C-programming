#include<stdio.h>

void swap(char **A_ptr, char **B_ptr)
{
char *temp = *A_ptr;
*A_ptr = *B_ptr;
*B_ptr = temp;
}

int main()
{
char *A = "pepsi";
char *B = "7Up";
printf("before changing the contents of glass A is %s and glass B is %s\n",A,B);
swap(&A, &B);
printf("after changing the contents of glass A is %s and glass B is %s\n", A, B);
getchar();
return 0;
}
