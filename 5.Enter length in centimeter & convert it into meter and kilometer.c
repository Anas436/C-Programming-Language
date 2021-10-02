#include<stdio.h>
main()
{
    float centimeter,meter,kilometer;
    printf("Enter length in centimeter:");
    scanf("%f",&centimeter);
    meter=centimeter/100;
    kilometer=meter/1000;
    printf("Meter= %.2f\n",meter);
    printf("Kilometer= %.2f\n",kilometer);
}
