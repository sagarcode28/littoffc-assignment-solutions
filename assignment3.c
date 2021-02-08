#include<stdio.h>
int main(int argc, char const *argv[])
{
    int rad;
    printf("enter the radius of the circle\n");
    scanf("%d",&rad);
    printf("the diameter of the circle%d\n",2*rad);
    printf("the circumference of the circle%f\n",2*3.14*rad);
    printf("the area of the circle%f\n",3.14*rad*rad);
    return 0;
}
