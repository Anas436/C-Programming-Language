#include<stdio.h>
main()
{
    int day;
    float week,month,year;
    printf("Enter day :");
    scanf("%d",&day);
    week=day/7;
    month=day/30;
    year=day/365;
    printf("week= %f\n",week);
    printf("month= %f\n",month);
    printf("year= %f\n",year);
}
