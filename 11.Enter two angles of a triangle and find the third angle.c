#include<stdio.h>
main()
{
    float a1,a2,a3;
    printf("Enter first angle:");
    scanf("%f",&a1);
     printf("Enter second angle:");
    scanf("%f",&a2);
    a3=180-(a1+a2);
    printf("Third angle=%.2f",a3);
}
