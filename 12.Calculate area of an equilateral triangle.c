#include<stdio.h>
main()
{
    float side,area;
    printf("Enter side:");
    scanf("%f",&side);
    area=(sqrt(3)/4)*side*side;
    printf("Area=%.2f sq.units",area);
}
