#include<stdio.h>
void main()
{
    char x;
    printf("enter the input:");
    x=getchar();
    putchar(x);
    if(isalpha (x))
    {
        printf("IT IS A CHARATER");
    }
    if(ispunct (x))
    {
        printf("IT IS A PUNCUATION");
    }
    if(isdigit (x))
    {
        printf("IT IS A DIGIT");
    }
    if(isupper (x))
    {
        printf("IT IS A UPPER CASE CHARATER");
    }
    if(islower (x))
    {
        printf("IT IS A LOWER CASE CHARATER");
    }
    if(isalphanum(x))
    {
        printf("IT IS A ALPHABET OR NUMERIC VALUE");
    }


}