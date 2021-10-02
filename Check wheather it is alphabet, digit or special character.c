#include<stdio.h>
int main()
{
    char ch;
  	printf(" Please Enter any character :  ");
  	scanf("%c", &ch);
    if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') )
  	{
  		printf("\n %c is an Alphabet", ch);
 	}
  	else if (ch >= '0' && ch <= '9')
  	{
  		printf("\n %c is a Digit", ch);
  	}
  	else
    {
      printf("\n %c is a Special Character", ch);
    }
    return(0);
}

