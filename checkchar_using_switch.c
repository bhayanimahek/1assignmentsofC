#include<stdio.h>
void main()
{
    char c;
    printf("enter the charater:");
    c=getchar();
    switch(c)
    {
        case 'a':
        printf("vowel");
        break;
        case 'e':
        printf("vowel");
        break;
        case 'i':
        printf("vowel");
        break;
        case 'o':
        printf("vowel");
        break;
        case 'u':
        printf("vowel");
        break;
        default :
        printf("it is a consonant");
        break;
    }
}