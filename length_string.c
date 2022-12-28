#include<stdio.h>
void main()
{
    char str[100];
    int len;
    printf("Enter the string:");
    gets(str);
    while(str[len]!='\0')
    {
        len++;
    }
    printf("%d",len);
}