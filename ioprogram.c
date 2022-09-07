#include<stdio.h>
int main()
{
    float num1=12.4;
    double num2;
    printf("enter a number:");
    scanf("%f", &num1);
    printf("enter another number:");
    scanf("%lf", &num2);
    printf("num1=:%f",num1);
    printf("num2=:%lf",num2);
    return 0;
}
