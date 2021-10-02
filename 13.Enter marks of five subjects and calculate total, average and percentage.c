#include<stdio.h>
main()
{
    float num1,num2,num3,num4,num5,total,avarage,percentage;
    printf("Enter num1 number:");
    scanf("%f",&num1);
     printf("Enter num2 number:");
    scanf("%f",&num2);
     printf("Enter num3 number:");
    scanf("%f",&num3);
     printf("Enter num4 number:");
    scanf("%f",&num4);
     printf("Enter num5 number:");
    scanf("%f",&num5);
    total=num1+num2+num3+num4+num5;
    avarage=total/5;
    percentage=(total/500)*100;
    printf("Total= %.2f\n",total);
    printf("avarage= %.2f\n",avarage);
    printf("percentage= %.2f\n",percentage);

}
