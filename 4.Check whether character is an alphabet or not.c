#include<stdio.h>
main()
{
    char c;
    printf("Enter a character:");
    scanf("%c",&c);
    (('a'<=c && 'z'>=c) || ('A'<=c && 'Z'>=c))? printf("%c is a character",c):
    printf("%c is not a character",c);


}
