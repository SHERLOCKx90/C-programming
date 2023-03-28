#include<stdio.h>
#include<math.h>

int main(){
    int d,r,h;
    float v;

    printf("enter the diameter of the cake oven:\n");
    scanf("%d",&d);

    printf("enter the depth of the baker:\n");
    scanf("%d",&h);

    r= ( d / 2);
    v= (M_PI * r * r * h );
    printf("the floor needed for the baker to prepare the cake batter is %f cc in volume. \n",v);
    return 0;
}