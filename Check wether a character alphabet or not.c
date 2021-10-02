#include<stdio.h>
main()
{
    char c;
    printf("Enrter a key:");
    scanf("%c",&c);
    if((c<='z' && c>='a') || (c<='Z' && c>='A'))
    {
    	printf("%c is a charecter",c);
	}else{

		printf("%c in not a charecter",c);
	}

}
