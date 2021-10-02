#include<stdio.h>
main()
{
        int p,t,r,formula1,formula2;
        printf("Enter principle:");
        scanf("%d",&p);
        printf("Enter Time:");
        scanf("%d",&t);
        printf("Enter rate:");
        scanf("%d",&r);
        formula1=p*(((1+r)/100)*t-1);
        formula2=(p*t*r)/100;
        printf("Compound Interest= %d\n",formula1);
        printf("Simple Interest= %d\n",formula2);
}
