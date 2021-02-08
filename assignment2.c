#include<stdio.h>
int main(int argc, char const *argv[])
{
    float res,temp;

    printf("enter a temperature value in celsius:\n");
    scanf("%f",&temp);
    res=(temp * 9/5) + 32;
    printf("the fahrenheit value%f\n",res);
    return 0;
}
