#include<stdio.h>
int main(int argc, char const *argv[])
{
    float total;
    float a,b,c,d,e;
    float percent;
    printf("enter mark of 5 subjects\n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    percent=(total/500)*100;
    printf("percentage%f\n",percent);
    if(percent>=90)
    {printf("grade:A\n");}
   else if(percent>=80)
    {printf("grade:B\n");}
   else if(percent>=70)
    {printf("grade:C\n");}
   else if(percent>=60)
    {printf("grade:D\n");}
   else if(percent>=40)
    {printf("grade:E\n");}
   else if(percent<40)
    {printf("grade:F\n");}
    else
    {printf("invalid input\n");}
    
    return 0;
}
