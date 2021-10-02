#include<stdio.h>
main()
{
    float radius,diameter,circumference,area,pi=3.1416;
    printf("Enter radius:");
    scanf("%f",&radius);
    diameter=2*radius;
    circumference=2*pi*radius;
    area=pi*radius*radius;
    printf("Diameter=%.2f\n",diameter);
    printf("Circumference=%.2f\n",circumference);
    printf("Area=%.2f\n",area);
}

