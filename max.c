#include<stdio.h>
void main()
{
    int a,b,max;
    printf("enter the two no.s:");
    scanf("%d %d",&a,&b);
    max=a>b?a:b;
    printf("%d",max);
}