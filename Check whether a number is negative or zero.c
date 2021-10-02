#include<stdio.h>
main()
{
    float number;
    printf("Enter number : ");
    scanf("%f",&number);
    if(number>0)
    {
        printf("Number is positive");
    }
    else if(number<0)
    {
        printf("Number is negative");
    }
    else
    {
        printf("Number is zero");
    }
}
-100
