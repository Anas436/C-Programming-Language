#include<stdio.h>
int main()
{
    float phy,che,bio,math,comp,per;
    printf("Enter marks of five subjects : ");
    scanf("%f%f%f%f%f",&phy,&che,&bio,&math,&comp);
    per=((phy+che+bio+math+comp)/500)*100;
    printf("Percentage=%.2f\n",per);

    if(per>=90)
    {
        printf("Grade=A");
    }
    else if(per>=80)
    {
        printf("Grade=B");
    }
    else if(per>=70)
    {
        printf("Grade=C");
    }
    else if(per>=60)
    {
        printf("Grade=D");
    }
    else if(per>=40)
    {
        printf("Grade=E");
    }
    else
    {
        printf("Grade=F");
    }
    return(0);
}
