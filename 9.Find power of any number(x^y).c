#include<stdio.h>
main()
{
    int x,y,power;
    printf("Enter number:");
    scanf("%d",&x);
    printf("Enter power:");
    scanf("%d",&y);
    power=pow(x,y);
    printf("Power of the number=%d",power);
    return(0);
}
