#include<stdio.h>
main()
{
float celsius,fahrenheit;
printf("Enter fahrenheit tempareture:");
scanf("%f",&fahrenheit);
celsius=((fahrenheit-32)*5/9);
printf("%.2f fahrenheit=%.2f celsius",fahrenheit,celsius);
}
